#include <iostream>

void insertion_sort(int arr[], int length)
{
	int key = 0;
	int i = 0;

	for (int j = 1; j < length; j++)
	{
		key = arr[j];

		i = j - 1;

		while (i >= 0 && arr[i] > key)
		{
			arr[i + 1] = arr[i];
			i = i - 1;
		}

		arr[i + 1] = key;
	}

	return;
}

void r_insertion_sort(int arr[], int length)
{
	int key = 0;
	int i = 0;

	for (int j = length - 2; j >= 0; j--)
	{
		key = arr[j];

		i = j + 1;

		while (i <= length - 1 && arr[i] < key)
		{
			arr[i - 1] = arr[i];
			i = i + 1;
		}

		arr[i - 1] = key;
	}

	return;
}

int main()
{
	int arr[] = { 31, 41, 59, 26, 41, 58 };
	int arrLength = 6;
	insertion_sort(arr, arrLength);
	
	for (int i = 0; i < arrLength; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}