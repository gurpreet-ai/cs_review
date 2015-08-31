// rotate image in-place by 90 degree

#include <iostream>
using namespace std;

const int SIZE = 4;

void print(int test[][SIZE]) 
{
	for (int i = 0; i < SIZE; i++) {
		for(int j = 0; j < SIZE; j++) {
			cout << test[i][j] << "\t";
		}
		cout << "\n";
	}
}

void rot90(int matrix[][SIZE])
{
	int first = 0;
	int last = 0;
	int offSet = 0;
	int top = 0;

	for (int layer = 0; layer < SIZE/2; layer++) 
	{
		first = layer;
		last = SIZE - 1 - layer;

		for (int i = first; i < last; i++) 
		{
			offSet = i - first;

			// example for a 4x4 matrix shown below
			// save top
			top = matrix[first][i];

			// move left to top
			// [0][0] = [3][0]
			// [0][1] = [2][0]
			// [0][2] = [1][0]
			// [0][3] = [0][0]
			matrix[first][i] = matrix[last-offSet][first];

			// move bottom to left
			// [3][0] = [3][3]
			// [2][0] = [3][2]
			// [1][0] = [3][1]
			// [0][0] = [3][0]
			matrix[last-offSet][first] = matrix[last][last - offSet];

			// move right to bottom
			// [3][3] = [0][3]
			// [3][2] = [1][3]
			// [3][1] = [2][3]
			// [3][0] = [3][3]
			matrix[last][last-offSet] = matrix[i][last];

			// move top to right
			// we get the idea...
			matrix[i][last] = top;

		}
	}

	cout << "\nAfter 90 degree rotation \n";
	print(matrix);
}

int main ()
{
	int test [SIZE][SIZE] = { 	{10, 20, 30, 40},
								{50, 60, 70, 80},
								{90, 100, 110, 120},
								{130, 140, 150, 160} };
	cout << "Original Array \n";
	print(test);
	rot90(test);
}