#include <iostream>
using namespace std;




void main()
{
	//arr
	const int ROW = 3;
	const int COL = 3;

	int arr[ROW][COL]{ {9999,2,6565}, {4,5,6}, {7,8,9} };

	//print arr

	cout << "original array: " << endl;

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	//find max
	int m = 0;
	for (int i = 0; i < COL; ++i) {

		// Change < to > if you want to find the smallest element
		if (arr[0][0] < arr[0][i])
			m = arr[0][i];
	}
	cout << m << "gay";


}