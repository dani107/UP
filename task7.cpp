// task7.cpp : Defines the entry point for the console application.
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
bool check(int* arr, int *size, int *n)
{
	int counter = 0;
	for (int i = 0; i < *size; i++)
		 {
		  if (*(arr + i) == *n)
		   {
			counter++;
			continue;
		   }
		 else
			 cout << *(arr + i) << " ";
		 }
	cout << endl;
	if (counter == 0)
		 return false;
	else
		return true;
}
int main()
{
	int arr[SIZE];
	int size;
	cout << "size:";
	cin >> size;
	masiv(arr, &size);
	cout << "n: ";
	int n;
	cin >> n;
	bool result = check(arr, &size, &n);
	cout << result << endl;
		
	return 0;
}