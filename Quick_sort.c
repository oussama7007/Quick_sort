#include <stdio.h>


void quicksort(int arr[], int len);
void quicksort_recurdion(int arr[], int low, int high);
int partition(int arr[], int low, int high);



void	swap(int *x, int *y)
{
	int tmp;

	tmp = *a;
	*a = *y;
	*y = tmp;
	return;
}
void quicksort(int arr[], int len)
{
	quicksort_recurtion(arr, 0, len - 1);
}
void quicksort_recurtion(int arr, int low, int high)
{
	if(low < high)
	{
		int pivot_index = partition(arr, low , high);
		quicksort_recurtion(arr, low, pivot_index - 1);
		quicksort_recurtion(arr, pivot_index + 1, high);
	}
}

int partition(int arr[], int low, int high);
{
	int pivot_value  = arr[high];
	int i = low;
	int j = low - 1;
	while(i < high)
	{
		if(arr[i] <= pivot_value)
		{
			j++;
			if(arr[i] < arr[j]
			{
				swap(&arr[i], &arr[j]);	
			}	
		}	
		i++;
	}
}
int main()
{
	int i;

	i = 0;
	int arr[] = {0,1,78,55,77,566,44,5,5,2};
	int len = sizeof(arr)/sizeof(int);
	
	quicksort(arr, int len);
	
	while(i < len)
	{
		printf("%d ", arr[i++]);
		printf("\n");
	}
}


