#include <Eigen/Geometry>
#include <iostream>

int main() {
    // Define a translation vector
    Eigen::Vector3d translation(1.0, 2.0, 3.0);

    // Define a rotation using Euler angles (roll, pitch, yaw)
    Eigen::Vector3d rotation(0.1, 0.2, 0.3);
    Eigen::AngleAxisd rotationAngleAxis(rotation.norm(), rotation.normalized());

    // Create a transformation matrix using translation and rotation
    Eigen::Affine3d transformationMatrix = Eigen::Translation3d(translation) * rotationAngleAxis;

    // Apply the transformation to a point
    Eigen::Vector3d pointToTransform(4.0, 5.0, 6.0);
    Eigen::Vector3d transformedPoint = transformationMatrix * pointToTransform;

    // Print the transformation matrix and the result of the transformation
    std::cout << "Transformation Matrix:\n" << transformationMatrix.matrix() << "\n\n";
    std::cout << "Original Point: " << pointToTransform.transpose() << "\n";
    std::cout << "Transformed Point: " << transformedPoint.transpose() << "\n";

    return 0;
}