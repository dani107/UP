// task6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
const int SIZE = 100;
void masiv(double* arr, int *size)
{
	for (int i = 0; i < *size; i++)
		 {
		cout << "arr[" << i << "]=";
		cin >> *(arr + i);
		 }
}
int average(double* arr, int *size)
{
	int index = -1;
	for (int i = 0; i < *size; i++)
		{
		if ((*(arr + i - 1) + *(arr + i + 1)) / 2 == *(arr + i))
			{
			 index = i;
			}
		}
	return index;
}
int main()
{
	double arr[SIZE];
	int size;
	cout << "size:";
	cin >> size;
	masiv(arr, &size);
	average(arr, &size);
	int result = average(arr, &size);
	cout << result << endl;

	return 0;
}