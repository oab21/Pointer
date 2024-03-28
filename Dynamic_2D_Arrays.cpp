#include <iostream>
using namespace std;
int main() {
	int row, col;
	cin >> row >> col;
	int** ptr = new int* [row];
	for (int i = 0; i < row; ++i)
		ptr[i] = new int[col];
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			ptr[i][j] = 5;
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			cout << ptr[i][j] << " ";

	for (int i = 0; i < row; ++i)
		delete[] ptr[i];
	delete[] ptr;
	ptr = NULL;
	return 0;
}