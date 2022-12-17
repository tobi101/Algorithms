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

int main()
{
	int arr[] = { 5, 2, 4, 6, 1,3 };
	int arrLength = 6;
	insertion_sort(arr, arrLength);
	
	for (int i = 0; i < arrLength; i++)
	{
		std::cout << arr[i];
	}

	return 0;
}