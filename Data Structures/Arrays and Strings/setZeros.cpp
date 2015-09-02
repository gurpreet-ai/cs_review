#include <iostream>
using namespace std;

const int ROW = 4;
const int COL = 4;

void print(int test[ROW][COL]) 
{
	for (int i = 0; i < ROW; i++) {
		for(int j = 0; j < COL; j++) {
			cout << test[i][j] << "\t";
		}
		cout << "\n";
	}
}

void setZeros(int matrix[ROW][COL])
{
	bool _row[ROW];
	bool _col[COL];

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			if (matrix[i][j] == 0) {
				_row[i] = true;
				_col[j] = true;
			}
		}
	}

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			if (_row[i] || _col[j]) {
				matrix[i][j] = 0;
			}	
		}
	}
 
	cout << "\nAfter setZeros function \n";
	print(matrix);
}

int main ()
{
	int test [ROW][COL] = { 	{0, 20, 30, 40},
								{50, 60, 70, 80},
								{90, 100, 110, 120},
								{130, 140, 150, 160} };
								
	cout << "Original Array \n";
	print(test);
	setZeros(test);
}