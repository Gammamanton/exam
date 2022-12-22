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
		cout << endl << endl;
	}

	//find max
	//max1

	int m = arr[0][0];
	int r = 0;

		for (int i = 0; i < ROW; ++i) 
		{

			if (m < arr[i][r])
				m = arr[i][r];
		}


	cout << "MAX col 1: " << m << endl;

	int max1 = m;

	//max2

	m = arr[0][1];
	r = 1;

	for (int i = 0; i < ROW; ++i)
	{

		if (m < arr[i][r])
			m = arr[i][r];
	}

	cout << "MAX col 2: " << m << endl;

	int max2 = m;

	//max3

	m = arr[0][2];
	r = 2;

	for (int i = 0; i < ROW; ++i)
	{

		if (m < arr[i][r])
			m = arr[i][r];
	}

	cout << "MAX col 3: " << m << endl << endl;

	int max3 = m;

	//find min
		//min1

	m = arr[0][0];
	r = 0;

	for (int i = 0; i < ROW; i++) {
		if (arr[i][r] < m) {
			m = arr[i][r];
		}
	}


	cout << "MIN col 1: " << m << endl;

	int min1 = m;

	//min2

	m = arr[0][1];
	r = 1;

	for (int i = 0; i < ROW; i++) {
		if (arr[i][r] < m) {
			m = arr[i][r];
		}
	}

	cout << "MIN col 2: " << m << endl;

	int min2 = m;

	//min3

	m = arr[0][2];
	r = 2;

	for (int i = 0; i < ROW; i++) {
		if (arr[i][r] < m) {
			m = arr[i][r];
		}
	}

	cout << "MIN col 3: " << m << endl << endl;

	int min3 = m;

	//min for max and max for min

	for (int i = 0; i < ROW; i++)
	{





	}

























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
