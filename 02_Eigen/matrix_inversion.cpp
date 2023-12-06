#include <iostream>
#include <Eigen/Dense>

int main(int argc, char* argv[])
{
	// Define a 3*3 matrix
	Eigen::Matrix3d matrix;
	matrix << 1, 0, 0,
			  0, 1, 0,
			  0, 0, 1;

	// Calculate the inverse
	Eigen::Matrix3d matrix_inverse;
	matrix_inverse = matrix.inverse();

	// Print the original and the inverted matrices
	std::cout << "Original Matrix:\n" << matrix << "\n\n";
	std::cout << "Inverse Matrix:\n" << matrix_inverse << "\n\n";

	return 0;
}