#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
	int _temp = *a;
	*a = *b;
	*b = _temp;
}
void print_array(int const arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void selection_sort(int arr[], int n)
{
	int i, j, min_index;

	for (i = 0; i < n - 1; i++)
	{
		min_index = i;
		for (j = i; j < n; j++)
		{
			if (arr[j] < arr[min_index])
				min_index = j;
		}
		swap(&arr[i], &arr[min_index]);

		cout << "Step " << i + 1 << ": ";
		print_array(arr, n);
	}
}

int main()
{
	int arr[] = {64, 25, 12, 22, 11};
	int size = sizeof(arr) / sizeof(arr[0]);
	selection_sort(arr, size);
	return 0;
}
