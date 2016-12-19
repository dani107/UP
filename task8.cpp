// task8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
const int SIZE = 100;
void masiv(int* arr, int *size)
{
	for (int i = 0; i < *size; i++)
	 {
		cout << "arr[" << i << "]=";
		cin >> *(arr + i);
	 }
}
int check(int* arr, int *size, int *n)
{
	int index = -1;
	for (int i = 0; i < *size; i++)
		{
		if (*(arr + i) == *n)
		  {
			index = i;
			break;
		  }
		}
	if (index != -1)
		 return index;
	else
		 return NULL;
}
int main()
{
	int arr[SIZE];
	int size;
	cout << "size:";
	cin >> size;
	masiv(arr, &size);
	int n;
	cout << "enter a number:";
	cin >> n;
	int result = check(arr, &size, &n);
	cout << result << endl;
		
	return 0;
}