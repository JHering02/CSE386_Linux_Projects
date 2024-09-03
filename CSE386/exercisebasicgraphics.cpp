/****************************************************
 * 2016-2024 Eric Bachmann and Mike Zmuda
 * All Rights Reserved.
 * NOTICE:
 * Dissemination of this information or reproduction
 * of this material is prohibited unless prior written
 * permission is granted.
 ****************************************************/

#include <ctime>
#include <vector>
#include "defs.h"
#include "utilities.h"
#include "framebuffer.h"
#include "colorandmaterials.h"
#include "rasterization.h"
#include "io.h"

FrameBuffer frameBuffer(WINDOW_WIDTH, WINDOW_HEIGHT);

void render() {
	frameBuffer.clearColorBuffer();
	drawLine(frameBuffer, 0, 0, 100, 100, red);
	drawLine(frameBuffer, 100, 100, 200, 100, blue);
	frameBuffer.showColorBuffer();
}

void resize(int width, int height) {
	frameBuffer.setFrameBufferSize(width, height);
	glutPostRedisplay();
}

int main(int argc, char* argv[]) {
	graphicsInit(argc, argv, __FILE__);

	glutDisplayFunc(render);
	glutReshapeFunc(resize);
	glutKeyboardFunc(keyboardUtility);
	glutMouseFunc(mouseUtility);

	frameBuffer.setClearColor(paleGreen);

	glutMainLoop();

	return 0;
}

// int main(int argc, char *argv[]) {
// 	std::cout << approximatelyEqual(1.0, 1.000001) << std::endl;
// 	std::cout << approximatelyEqual(3.000000, 3.1) << std::endl;
// 	double a = 3.0, b = 4.0;
// 	std::cout << a << b << std::endl;
// 	swap(a, b);
// 	std::cout << a << b << std::endl;
// 	std::cout << normalizeDegrees(0) << std::endl;
// 	std::cout << normalizeDegrees(1.75) << std::endl;
// 	std::cout << normalizeDegrees(-1) << std::endl;
// 	std::cout << normalizeDegrees(-721) << std::endl;
// 	std::cout << rad2deg(-360.0) << std::endl;
// 	std::cout << deg2rad(20626.5) << std::endl;
// 	std::cout << min(1, 2, 3) << std::endl;
// 	std::cout << min(2, 1, 3) << std::endl;
// 	std::cout << min(3, 2, 1) << std::endl;
// 	std::cout << max(1, 2, 3) << std::endl;
// 	std::cout << max(2, 3, 1) << std::endl;
// 	std::cout << max(3, 2, 1) << std::endl;
// 	std::cout << distanceFromOrigin(0, 1) << std::endl;
// 	std::cout << distanceFromOrigin(1, 0) << std::endl;
// 	std::cout << distanceFromOrigin(1, 1) << std::endl;
// 	std::cout << distanceFromOrigin(-10, 30) << std::endl;
// 	std::cout << distanceBetween(0, 0, 1, 1) << std::endl;
// 	std::cout << distanceBetween(1, 1, 0, 0) << std::endl;
// 	std::cout << distanceBetween(10, 10, 11, 11) << std::endl;
// 	std::cout << distanceBetween(100, 100, 99, 99) << std::endl;
// 	std::cout << distanceBetween(54, 1, -34, -99) << std::endl;
// 	std::cout << areaOfTriangle(3, 4, 5) << std::endl;
// 	std::cout << areaOfTriangle(-3, 4, 5) << std::endl;
// 	std::cout << areaOfTriangle(3, 4, 50) << std::endl;
// 	std::cout << areaOfTriangle(0, 0, 3, 0, 0, 4) << std::endl;
// 	return 0;
// }
