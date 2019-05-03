#include <iostream>

/*
Create a file that does the following sorting methods:
*Insertion Sort
*Bubble sort
*Selection Sort

As a bonus, create a case statement to select which sort you'll do for the data presented.
Additionally make a function for swapping and printing the array.
*/

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
		std::cout << "\n";
	}
}
void InsertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void BubbleSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}

void SelectionSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
			swap(&arr[minIndex], &arr[i]);
		}
	}
}

int main()
{
	int arr[] = { 10,23, 1, 15,11 };
	int n = sizeof(arr) / sizeof(arr[0]);
	std::cout << "Please make your sorting Selection\n";
	std::cout << "1. Insertion 2. Bubble Sort 3. Selection Sort\n";
	int sortSelect;
	std::cin >> sortSelect;
	switch (sortSelect)
	{
	case 1:
		InsertionSort(arr, n);
		PrintArray(arr, n);
		break;
	case 2:
		BubbleSort(arr, n);
		PrintArray(arr, n);
		break;
	case 3:
		SelectionSort(arr, n);
		PrintArray(arr, n);
		break;
	default:
		std::cout << "try again\n";
		break;

	}
	std::system("PAUSE");
}
