// ConsoleApplication3.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>

using namespace std;

void quickSort(int arr[], int left, int right)
{
	int i = left;
	int j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];

	while (i <= j)
	{
		while (arr[i] < pivot)
		{
			i++;
		}
		while (arr[j] > pivot)
		{
			j--;
		}

		if (i <= j)
		{
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}

if(left<j)
{
	quickSort(arr, left, i);
}

if (i < right)
{
	quickSort(arr, i, right);

}
	}


}

int main()
{
	int arr[10];
	int entrer = 0;
	int sorti = 9;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}

	quickSort(arr, 0, 9);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");
    return 0;
}

