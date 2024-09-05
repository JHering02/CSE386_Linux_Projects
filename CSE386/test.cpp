#include "defs.h"
#include "utilities.h"
#include <iostream>

// Coding exercise 1 test

// int main(int argc, char *argv[]) {
// 	std::cout << approximatelyEqual(1.0, 1.000001) << std::endl;
// 	std::cout << approximatelyEqual(3.000000, 3.1) << std::endl;
// 	double a = 3.0, b = 4.0;
// 	std::cout << a << b << std::endl;
// 	swap(a, b);
// 	std::cout << a << b << std::endl;
//     std::cout << "Normalize Radians" << std::endl;
//     std::cout << normalizeRadians(0) << std::endl;
//     std::cout << normalizeRadians(1) << std::endl;
//     std::cout << normalizeRadians(3 * PI) << std::endl;
//     std::cout << normalizeRadians(-31 * PI) << std::endl;
//     std::cout << "Normalize Degrees" << std::endl;
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

// Coding exercise 2 test
// int main(int argc, char *argv[])
// {
//     double x, y;

//     pointOnUnitCircle(0.0, x, y);
//     std::cout << "Angle: 0 radians -> x: " << x << ", y: " << y << " (Expected: x: 1, y: 0)" << std::endl;

//     pointOnUnitCircle(glm::pi<double>() / 2, x, y);
//     std::cout << "Angle: π/2 radians -> x: " << x << ", y: " << y << " (Expected: x: 0, y: 1)" << std::endl;

//     pointOnUnitCircle(glm::pi<double>(), x, y);
//     std::cout << "Angle: π radians -> x: " << x << ", y: " << y << " (Expected: x: -1, y: 0)" << std::endl;

//     pointOnUnitCircle(3 * glm::pi<double>() / 2, x, y);
//     std::cout << "Angle: 3π/2 radians -> x: " << x << ", y: " << y << " (Expected: x: 0, y: -1)" << std::endl;

//     pointOnUnitCircle(2 * glm::pi<double>(), x, y);
//     std::cout << "Angle: 2π radians -> x: " << x << ", y: " << y << " (Expected: x: 1, y: 0)" << std::endl;

//     // // Tests for pointOnCircle
//     // dvec2 result = pointOnCircle(dvec2(0, 0), 1, 0.0);
//     // std::cout << "Center: (0, 0), Radius: 1, Angle: 0 radians -> x: " << result.x << ", y: " << result.y << " (Expected: x: 1, y: 0)" << std::endl;

//     // result = pointOnCircle(dvec2(0, 0), 1, glm::pi<double>() / 2);
//     // std::cout << "Center: (0, 0), Radius: 1, Angle: π/2 radians -> x: " << result.x << ", y: " << result.y << " (Expected: x: 0, y: 1)" << std::endl;

//     // result = pointOnCircle(dvec2(2, 2), 2, glm::pi<double>());
//     // std::cout << "Center: (2, 2), Radius: 2, Angle: π radians -> x: " << result.x << ", y: " << result.y << " (Expected: x: 0, y: 2)" << std::endl;

//     // result = pointOnCircle(dvec2(-1, -1), 3, 3 * glm::pi<double>() / 2);
//     // std::cout << "Center: (-1, -1), Radius: 3, Angle: 3π/2 radians -> x: " << result.x << ", y: " << result.y << " (Expected: x: -1, y: -4)" << std::endl;

//     // result = pointOnCircle(dvec2(1, 1), 1, 2 * glm::pi<double>());
//     // std::cout << "Center: (1, 1), Radius: 1, Angle: 2π radians -> x: " << result.x << ", y: " << result.y << " (Expected: x: 2, y: 1)" << std::endl;

//     // direction in radians
//     // Test Case 1
//     double result = directionInRadians(glm::dvec2(0, 0), glm::dvec2(2, 2));
//     std::cout << "From: (0, 0), To: (2, 2) -> Angle (radians): " << result
//               << " (Expected: 0.7853981634)" << std::endl;

//     // Test Case 2
//     result = directionInRadians(glm::dvec2(2, 10), glm::dvec2(3, 11));
//     std::cout << "From: (2, 10), To: (3, 11) -> Angle (radians): " << result
//               << " (Expected: 0.7853981634)" << std::endl;

//     // Test Case 3
//     result = directionInRadians(glm::dvec2(2, 2), glm::dvec2(2, 0));
//     std::cout << "From: (2, 2), To: (2, 0) -> Angle (radians): " << result
//               << " (Expected: 4.7123889804)" << std::endl;

//     // Test Case 4
//     result = directionInRadians(glm::dvec2(1, -1), glm::dvec2(1.3420, -1.93969));
//     std::cout << "From: (1, -1), To: (1.3420, -1.93969) -> Angle (radians): " << result
//               << " (Expected: 5.06144)" << std::endl;

//     result = directionInRadians(glm::dvec2(2, 2));
//     std::cout << "From: (0, 0), To: (2, 2) -> Angle (radians): " << result
//               << " (Expected: 0.7853981634)" << std::endl;

//     result = directionInRadians(glm::dvec2(0, -2));
//     std::cout << "From: (0, 0), To: (0, -2) -> Angle (radians): " << result
//               << " (Expected: 4.7123889804)" << std::endl;

//     result = directionInRadians(0, 0, 2, 2);
//     std::cout << "From: (0, 0), To: (2, 2) -> Angle (radians): " << result
//               << " (Expected: 0.7853981634)" << std::endl;

//     result = directionInRadians(2, 10, 3, 11);
//     std::cout << "From: (2, 10), To: (3, 11) -> Angle (radians): " << result
//               << " (Expected: 0.7853981634)" << std::endl;

//     result = directionInRadians(2, 2, 2, 0);
//     std::cout << "From: (2, 2), To: (2, 0) -> Angle (radians): " << result
//               << " (Expected: 4.7123889804)" << std::endl;
// }