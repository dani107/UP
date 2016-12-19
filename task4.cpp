// task4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
const int ROWS = 100;
const int COLS = 100;
void matrix(int arr[][100], int *cols, int *rows)
{
	for (int i = 0; i < *rows; i++)
		 {
		for (int j = 0; j < *cols; j++)
			 {
			cout << "arr[" << i << "][" << j << "]=";
				cin >> arr[i][j];
			}
		}
	}
void transposition(int arr[][100], int *cols, int *rows, int arr2[][100])
{
	for (int i = 0; i < *rows; i++)
		{
		for (int j = 0; j < *cols; j++)
		 {
			 arr2[i][j] = arr[j][i];
			 cout << arr2[i][j] << " ";
		 }
		cout << endl;
		}
}
int main()
{
	int array1[ROWS][COLS];
	int array2[ROWS][COLS];
	int numberows, numbercols;
	cout << "rows:";
	cin >> numberows;
	cout << "cols:";
	cin >> numbercols;
	matrix(array1, &numberows, &numbercols);
	transposition(array1, &numberows, &numbercols, array2);
	
		
	return 0;
}
