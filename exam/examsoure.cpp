#include <iostream>
using namespace std;





void main()
{
	//arr
	const int ROW = 3;
	const int COL = 3;

	int arr[ROW][COL]{ {1,2,3}, {4,5,6}, {7,8,9} };

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
	//max1

	int m = arr[0][0];
	int r = 0;

	// Change < to > if you want to find the smallest element

		for (int i = 0; i < COL; ++i) 
		{

			if (m < arr[r][i])
				m = arr[r][i];
		}


	cout << "MAX ROW 1: " << m << endl;

	//max2

	m = arr[0][0];
	r = 1;

	for (int i = 0; i < COL; ++i)
	{

		if (m < arr[r][i])
			m = arr[r][i];
	}

	cout << "MAX ROW 2: " << m << endl;

	//max3

	m = arr[0][0];
	r = 2;

	for (int i = 0; i < COL; ++i)
	{

		if (m < arr[r][i])
			m = arr[r][i];
	}

	cout << "MAX ROW 3: " << m << endl;

	//find min
		//min1

	m = arr[0][0];
	r = 0;

	for (int i = 0; i < COL; i++) {
		if (arr[r][i] < m) {
			m = arr[r][i];
		}
	}


	cout << "MIN ROW 1: " << m << endl;

	//min2

	m = arr[0][0];
	r = 1;

	for (int i = 0; i < COL; i++) {
		if (arr[r][i] < m) {
			m = arr[r][i];
		}
	}

	cout << "MIN ROW 2: " << m << endl;

	//min3

	m = arr[0][0];
	r = 2;

	for (int i = 0; i < COL; i++) {
		if (arr[r][i] < m) {
			m = arr[r][i];
		}
	}

	cout << "MIN ROW 3: " << m << endl;


















	cout << "mod array: " << endl;

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

}
