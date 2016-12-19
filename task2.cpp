// task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
const int SIZE = 5;
void reverse(int* arr, int x)
{

	for (size_t i = 0; i < x / 2; i++)
	{

		int temp = *(arr + i);
		*(arr + i) = *(arr + x - i - 1);
		*(arr + x - i - 1) = temp;
	}
	for (int i = 0; i < x; i++)
	{
		cout << *(arr + i) << " ";
	}
}
int main()
{
	int arr[SIZE] = { 1,2,3,4,5 };
	reverse(arr, 5);

	return 0;
}