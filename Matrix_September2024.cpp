#include <iostream>

int main() {
	const int row = 3;
	const int column = 4;

	int arr[row][column] = { 
		{13, 50, 18, 22},
		{11, 34, 48, 15}, 
		{69, 98, 10, 12} 
	};


	std::cout << "Output by row:" << '\n';
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < column; ++j) {

			if (j + 1 != column) {
				std::cout << arr[i][j] << ' ';
			}

			else {
				std::cout << arr[i][j] << '\n';
			}

		}
	}

	std::cout << '\n' << "Output by columns:" << '\n';
	for (int i = 0; i < column; ++i) {
		for (int j = 0; j < row; ++j) {

			if (j + 1 != row) {
				std::cout << arr[j][i] << ' ';
			}

			else {
				std::cout << arr[j][i] << '\n';
			}

		}
	}
}
