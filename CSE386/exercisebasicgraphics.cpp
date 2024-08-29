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

// int main(int argc, char* argv[]) {
// 	graphicsInit(argc, argv, __FILE__);

// 	glutDisplayFunc(render);
// 	glutReshapeFunc(resize);
// 	glutKeyboardFunc(keyboardUtility);
// 	glutMouseFunc(mouseUtility);

// 	frameBuffer.setClearColor(paleGreen);

// 	glutMainLoop();

// 	return 0;
// }

int main(int argc, char *argv[]) {
	std::cout << approximatelyEqual(1.0, 1.000001) << std::endl;
	return 0;
}
