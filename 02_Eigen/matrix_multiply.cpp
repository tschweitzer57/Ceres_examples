#include <iostream>
#include <Eigen/Dense>

int main(int argc, char* argv[])
{
	// Define a 3*3 matrix
	Eigen::Matrix3d matrix1, matrix2;
	Eigen::Vector3d vector1;
	matrix1 << 1, 0, 0,
			   0, 1, 0,
			   0, 0, 1;

	matrix2 << 1, 2, 3,
			   4, 5, 6,
			   7, 8, 9;

	vector1 << 1, 2, 3;

	// Calculate the multiply
	Eigen::Matrix3d matrix_inverse;
	Eigen::Vector3d test_mult;
	matrix_inverse = matrix1 * matrix2;
	test_mult = matrix1 * vector1;

	// Print the original and the inverted matrices
	std::cout << "Original Matrix 1:\n" << matrix1 << "\n\n";
	std::cout << "Original Matrix 2:\n" << matrix2 << "\n\n";
	std::cout << "Inverse Matrix:\n" << matrix_inverse << "\n\n";
	std::cout << "vector :\n" << test_mult << "\n\n";

	return 0;
}