#include "defs.h"
#include "utilities.h"
#include <iostream>


// Helper function to print glm::dvec2
void printVec(const glm::dvec2& v) {
    std::cout << "dvec2(" << v.x << ", " << v.y << ")\n";
}

// Helper function to print glm::dvec3
void printVec(const glm::dvec3& v) {
    std::cout << "dvec3(" << v.x << ", " << v.y << ", " << v.z << ")\n";
}

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

// Coding Exercise 3 Test

// int main(int argc, char *argv[]) {

//     std::vector<double> result;

//     result = quadratic(1,4,3);
//     std::cout << "{";
// 	 for (auto res : result) {
//          std::cout << res << ",";
//     }
//     std::cout << "}" << std::endl;

//     result = quadratic(1,0,0);
//     std::cout << "{";
// 	 for (auto res : result) {
//          std::cout << res << ",";
//     }
//     std::cout << "}" << std::endl;

//     result = quadratic(-4,-2,-1);
//     std::cout << "{";
// 	 for (auto res : result) {
//          std::cout << res << ",";
//     }
//     std::cout << "}" << std::endl;

//     // Roots with array

//     double roots[2];
//     int numRoots = quadratic(-4, -2, -1, roots);
//     if (numRoots == 0)
//     {
//         std::cout << "There are no real roots" << endl;
//     }
//     else if (numRoots == 1)
//     {
//         std::cout << "Only one root: " << roots[0] << endl;
//     }
//     else if (numRoots == 2)
//     {
//         if (roots[0] > roots[1])
//             std::cout << "Something is wrong. This should not happen" << endl;
//         else
//             std::cout << "Two roots: " << roots[0] << " and " << roots[1] << endl;
//     }
//     else
//     {
//         std::cout << "Something is wrong. This should not happen" << endl;
//     }

//     return 0;
// }

int main(int argc, char *argv[]) {
    // // Test case 1: Zero Vector
    // glm::dvec2 vec1(0.0, 0.0);
    // glm::dvec2 result1 = doubleIt(vec1);
    // std::cout << "Test Case 1 - Zero Vector:\n";
    // printVec(result1);
    // std::cout << "Expected Output: dvec2(0.0, 0.0)\n\n";

    // // Test case 2: Unit Vector
    // glm::dvec2 vec2(1.0, 1.0);
    // glm::dvec2 result2 = doubleIt(vec2);
    // std::cout << "Test Case 2 - Unit Vector:\n";
    // printVec(result2);
    // std::cout << "Expected Output: dvec2(2.0, 2.0)\n\n";

    // // Test case 3: Negative Values
    // glm::dvec2 vec3(-1.0, -1.0);
    // glm::dvec2 result3 = doubleIt(vec3);
    // std::cout << "Test Case 3 - Negative Values:\n";
    // printVec(result3);
    // std::cout << "Expected Output: dvec2(-2.0, -2.0)\n\n";

    // // Test case 4: Mixed Values
    // glm::dvec2 vec4(1.0, -1.0);
    // glm::dvec2 result4 = doubleIt(vec4);
    // std::cout << "Test Case 4 - Mixed Values:\n";
    // printVec(result4);
    // std::cout << "Expected Output: dvec2(2.0, -2.0)\n\n";

    // // Test case 5: Large Values
    // glm::dvec2 vec5(1e+10, 1e+10);
    // glm::dvec2 result5 = doubleIt(vec5);
    // std::cout << "Test Case 5 - Large Values:\n";
    // printVec(result5);
    // std::cout << "Expected Output: dvec2(2e+10, 2e+10)\n\n";

    // // Test case 6: Small Values
    // glm::dvec2 vec6(1e-10, 1e-10);
    // glm::dvec2 result6 = doubleIt(vec6);
    // std::cout << "Test Case 6 - Small Values:\n";
    // printVec(result6);
    // std::cout << "Expected Output: dvec2(2e-10, 2e-10)\n\n";

    // // Test case 7: Random Values
    // glm::dvec2 vec7(3.7, -2.4);
    // glm::dvec2 result7 = doubleIt(vec7);
    // std::cout << "Test Case 7 - Random Values:\n";
    // printVec(result7);
    // std::cout << "Expected Output: dvec2(7.4, -4.8)\n\n";

    // myNormalize

    // // Test case 1: Zero Vector
    // glm::dvec3 vec1(0.0, 0.0, 0.0);
    // glm::dvec3 result1 = myNormalize(vec1);
    // std::cout << "Test Case 1 - Zero Vector:\n";
    // printVec(result1);
    // std::cout << "Expected Output: dvec3(0.0, 0.0, 0.0)\n\n";

    // // Test case 2: Unit Vector (along x-axis)
    // glm::dvec3 vec2(1.0, 0.0, 0.0);
    // glm::dvec3 result2 = myNormalize(vec2);
    // std::cout << "Test Case 2 - Unit Vector (x-axis):\n";
    // printVec(result2);
    // std::cout << "Expected Output: dvec3(1.0, 0.0, 0.0)\n\n";

    // // Test case 3: Unit Vector (along y-axis)
    // glm::dvec3 vec3(0.0, 1.0, 0.0);
    // glm::dvec3 result3 = myNormalize(vec3);
    // std::cout << "Test Case 3 - Unit Vector (y-axis):\n";
    // printVec(result3);
    // std::cout << "Expected Output: dvec3(0.0, 1.0, 0.0)\n\n";

    // // Test case 4: Unit Vector (along z-axis)
    // glm::dvec3 vec4(0.0, 0.0, 1.0);
    // glm::dvec3 result4 = myNormalize(vec4);
    // std::cout << "Test Case 4 - Unit Vector (z-axis):\n";
    // printVec(result4);
    // std::cout << "Expected Output: dvec3(0.0, 0.0, 1.0)\n\n";

    // // Test case 5: Vector with non-unit length
    // glm::dvec3 vec5(3.0, 4.0, 0.0);
    // glm::dvec3 result5 = myNormalize(vec5);
    // std::cout << "Test Case 5 - Non-unit Length Vector:\n";
    // printVec(result5);
    // std::cout << "Expected Output: dvec3(0.6, 0.8, 0.0)\n\n";

    // // Test case 6: Random Vector
    // glm::dvec3 vec6(2.0, -1.0, 3.0);
    // glm::dvec3 result6 = myNormalize(vec6);
    // std::cout << "Test Case 6 - Random Vector:\n";
    // printVec(result6);
    // std::cout << "Expected Output: dvec3(" << (2.0 / 3.7416573867739413) << ", " 
    //           << (-1.0 / 3.7416573867739413) << ", " 
    //           << (3.0 / 3.7416573867739413) << ")\n\n"; // Calculated length ≈ 3.741657

    // // Test case 7: Negative Vector
    // glm::dvec3 vec7(-1.0, -2.0, -2.0);
    // glm::dvec3 result7 = myNormalize(vec7);
    // std::cout << "Test Case 7 - Negative Vector:\n";
    // printVec(result7);
    // std::cout << "Expected Output: dvec3(" << (-1.0 / 3.0) << ", " 
    //           << (-2.0 / 3.0) << ", " 
    //           << (-2.0 / 3.0) << ")\n\n"; // Calculated length = 3.0

    // Orthogonal

    // // Test case 1: Orthogonal Vectors
    // glm::dvec3 vec1(1.0, 0.0, 0.0);
    // glm::dvec3 vec2(0.0, 1.0, 0.0);
    // std::cout << "Test Case 1 - Orthogonal Vectors:\n";
    // std::cout << "Are orthogonal: " << (isOrthogonal(vec1, vec2) ? "Yes" : "No") << "\n\n";

    // // Test case 2: Non-Orthogonal Vectors
    // glm::dvec3 vec3(1.0, 2.0, 0.0);
    // glm::dvec3 vec4(1.0, -1.0, 0.0);
    // std::cout << "Test Case 2 - Non-Orthogonal Vectors:\n";
    // std::cout << "Are orthogonal: " << (isOrthogonal(vec3, vec4) ? "Yes" : "No") << "\n\n";

    // // Test case 3: Zero Vector and Orthogonal Vector
    // glm::dvec3 vec5(0.0, 0.0, 0.0);
    // glm::dvec3 vec6(1.0, 1.0, 1.0);
    // std::cout << "Test Case 3 - Zero Vector and Orthogonal Vector:\n";
    // std::cout << "Are orthogonal: " << (isOrthogonal(vec5, vec6) ? "Yes" : "No") << "\n\n";

    // // Test case 4: Zero Vector and Zero Vector
    // glm::dvec3 vec7(0.0, 0.0, 0.0);
    // glm::dvec3 vec8(0.0, 0.0, 0.0);
    // std::cout << "Test Case 4 - Zero Vector and Zero Vector:\n";
    // std::cout << "Are orthogonal: " << (isOrthogonal(vec7, vec8) ? "Yes" : "No") << "\n\n";

    // // Test case 5: Edge Case - Large Values
    // glm::dvec3 vec9(1e+10, 1e+10, 1e+10);
    // glm::dvec3 vec10(-1e+10, 1e+10, 0.0);
    // std::cout << "Test Case 5 - Large Values:\n";
    // std::cout << "Are orthogonal: " << (isOrthogonal(vec9, vec10) ? "Yes" : "No") << "\n\n";

    // // Test case 6: Edge Case - Small Values
    // glm::dvec3 vec11(1e-10, 1e-10, 1e-10);
    // glm::dvec3 vec12(-1e-10, 1e-10, 1e-10);
    // std::cout << "Test Case 6 - Small Values:\n";
    // std::cout << "Are orthogonal: " << (isOrthogonal(vec11, vec12) ? "Yes" : "No") << "\n\n";

    // // Test case 7: Random Vectors
    // glm::dvec3 vec13(3.0, -1.0, 2.0);
    // glm::dvec3 vec14(-2.0, 4.0, 0.0);
    // std::cout << "Test Case 7 - Random Vectors:\n";
    // std::cout << "Are orthogonal: " << (isOrthogonal(vec13, vec14) ? "Yes" : "No");
}