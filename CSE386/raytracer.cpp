/****************************************************
 * 2016-2024 Eric Bachmann and Mike Zmuda
 * All Rights Reserved.
 * NOTICE:
 * Dissemination of this information or reproduction
 * of this material is prohibited unless prior written
 * permission is granted.
 ****************************************************/
#include "raytracer.h"
#include "ishape.h"
#include "io.h"

 /**
  * @fn	RayTracer::RayTracer(const color &defa)
  * @brief	Constructs a raytracers.
  * @param	defa	The clear color.
  */

RayTracer::RayTracer(const color& defa)
	: defaultColor(defa) {
}

/**
 * @fn	void RayTracer::raytraceScene(FrameBuffer &frameBuffer, int depth, const IScene &theScene) const
 * @brief	Raytrace scene
 * @param [in,out]	frameBuffer	Framebuffer.
 * @param 		  	depth	   	The current depth of recursion.
 * @param 		  	theScene   	The scene.
 */

void RayTracer::raytraceScene(FrameBuffer& frameBuffer, int depth,
	const IScene& theScene, const int& N) const {
	const RaytracingCamera& camera = *theScene.camera;
	const vector<VisibleIShapePtr>& objs = theScene.opaqueObjs;
	const vector<LightSourcePtr>& lights = theScene.lights;
	color defaultColor = frameBuffer.getClearColor();

	for (int y = 0; y < frameBuffer.getWindowHeight(); ++y) {
		for (int x = 0; x < frameBuffer.getWindowWidth(); ++x) {
			DEBUG_PIXEL = (x == xDebug && y == yDebug);
			if (DEBUG_PIXEL) {
				cout << "";
			}
			
			const VisibleIShape& firstVisibleShape = *theScene.opaqueObjs[0];
			const IShape& firstShape = *firstVisibleShape.shape;
			// Anti Aliasing
			Ray ray = camera.getRay(x, y);
			if (N > 1) {
				std::vector<Ray> rays;
				for (int col = 1; col <= N; col++) {
					for (int row = 1; row <= N; row++) {
						rays.push_back(Ray(camera.getRay(x, y, row, col, N)));
					}
				}
			} else {
				frameBuffer.setColor(x,y,glm::clamp(traceIndividualRay(camera.getRay(x,y), theScene, 0), 0.0, 1.0));
			}
			// // For AA, do this for each ray in the vec, and add em up, divide by N^2 
			// // consider moving this to helper method.

			// // firstShape.findClosestIntersection(ray, hit);
			// OpaqueHitRecord hit;
			// VisibleIShape::findIntersection(ray, theScene.opaqueObjs, hit);
			// if (hit.t != FLT_MAX) {
			// 	// hit.material = firstVisibleShape.material;
			// 	// color C = hit.material.diffuse;
			// 	if (glm::dot(ray.dir, hit.normal) > 0) hit.normal = -1.0 * hit.normal;
			// 	bool inShadow = theScene.lights[0] -> pointIsInAShadow(hit.interceptPt, hit.normal, objs, camera.getFrame());
			// 	color sum = black;
			// 	color col = theScene.lights[0]->illuminate(hit.interceptPt,
			// 	 hit.normal, hit.material, camera.getFrame(), inShadow);
			// 	if (hit.texture != nullptr) {
			// 		sum = hit.texture->getPixelUV(hit.u, hit.v);
			// 		frameBuffer.setColor(x,y,glm::clamp(sum,0.0,1.0));
			// 	} else {
			// 		for (auto& light : theScene.lights) {
			// 			bool inShadow = light->pointIsInAShadow(hit.interceptPt,hit.normal,objs, camera.getFrame());
			// 			sum += light->illuminate(hit.interceptPt, hit.normal, hit.material, camera.getFrame(), inShadow);
			// 		}
			// 		frameBuffer.setColor(x,y,glm::clamp(sum,0.0,1.0));
			// 	}
			// 	// (N > 1) ? frameBuffer.setColor(x,y, (sum / glm::pow(N,2))) : frameBuffer.setColor(x,y,glm::clamp(sum,0.0,1.0));
			// } else {
			// 	frameBuffer.setColor(x,y,black);
			// }
			// frameBuffer.showAxes(x, y, ray, 0.25);			// Displays R/x, G/y, B/z axes
		}
	}
	frameBuffer.showColorBuffer();
}

/**
 * @fn	color RayTracer::traceIndividualRay(const Ray &ray,
 *											const IScene &theScene,
 *											int recursionLevel) const
 * @brief	Trace an individual ray.
 * @param	ray			  	The ray.
 * @param	theScene	  	The scene.
 * @param	recursionLevel	The recursion level.
 * @return	The color to be displayed as a result of this ray.
 */

color RayTracer::traceIndividualRay(const Ray& ray, const IScene& theScene, int recursionLevel) const {
			// 	// For AA, do this for each ray in the vec, and add em up, divide by N^2 
			// // consider moving this to helper method.

			// // firstShape.findClosestIntersection(ray, hit);
			// OpaqueHitRecord hit;
			// VisibleIShape::findIntersection(ray, theScene.opaqueObjs, hit);
			// if (hit.t != FLT_MAX) {
			// 	// hit.material = firstVisibleShape.material;
			// 	// color C = hit.material.diffuse;
			// 	if (glm::dot(ray.dir, hit.normal) > 0) hit.normal = -1.0 * hit.normal;
			// 	bool inShadow = theScene.lights[0] -> pointIsInAShadow(hit.interceptPt, hit.normal, objs, camera.getFrame());
			// 	color sum = black;
			// 	color col = theScene.lights[0]->illuminate(hit.interceptPt,
			// 	 hit.normal, hit.material, camera.getFrame(), inShadow);
			// 	if (hit.texture != nullptr) {
			// 		sum = hit.texture->getPixelUV(hit.u, hit.v);
			// 		frameBuffer.setColor(x,y,glm::clamp(sum,0.0,1.0));
			// 	} else {
			// 		for (auto& light : theScene.lights) {
			// 			bool inShadow = light->pointIsInAShadow(hit.interceptPt,hit.normal,objs, camera.getFrame());
			// 			sum += light->illuminate(hit.interceptPt, hit.normal, hit.material, camera.getFrame(), inShadow);
			// 		}
			// 		frameBuffer.setColor(x,y,glm::clamp(sum,0.0,1.0));
			// 	}
			// 	// (N > 1) ? frameBuffer.setColor(x,y, (sum / glm::pow(N,2))) : frameBuffer.setColor(x,y,glm::clamp(sum,0.0,1.0));
			// } else {
			// 	frameBuffer.setColor(x,y,black);
			// }
			// frameBuffer.showAxes(x, y, ray, 0.25);			// Displays R/x, G/y, B/z axes
	return black;
}
