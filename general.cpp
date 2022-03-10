#include "SeconProject.h"

void print(int* arr, unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void (*func2(int* f))(int* a, unsigned size)
{
	if (*f == 1) return reverse;
	if (*f == 2) return sort_increase;
	if (*f == 3) return sort_decrease;
}

void reverse(int* a, unsigned size)
{
	for (int i = 0; i < size / 2; i++) 
	{
		swap(a[i], a[size - 1 - i]);
	}
	print(a, size);
}

void sort_increase(int* a, unsigned size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (a[j] > a[j + 1]) 
				swap(a[j], a[j+1]);
		}
	}
	print(a, size);
	
}

void sort_decrease(int* a, unsigned size)
{
	for (int i = 0; i < size - 1; i++) 
	{
		for (int j = 0; j < size - i - 1; j++) 
		{
			if (a[j] < a[j + 1]) 
				swap(a[j], a[j + 1]);
		}
	}
	print(a, size);
	
}

