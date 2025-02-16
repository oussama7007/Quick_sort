#include <stdio.h>

void quicksort(int arr[], int len);
void quicksort_recurtion(int arr[], int low, int high);
int partition(int arr[], int low, int high);

void swap(int *a, int *y)
{
    int tmp;
    tmp = *a;
    *a = *y;
    *y = tmp;
}

void quicksort(int arr[], int len)
{
    quicksort_recurtion(arr, 0, len - 1);
}

void quicksort_recurtion(int arr[], int low, int high)
{
    if(low < high)
    {
        int pivot_index = partition(arr, low, high);
        quicksort_recurtion(arr, low, pivot_index - 1);
        quicksort_recurtion(arr, pivot_index + 1, high);
    }
}

int partition(int arr[], int low, int high)
{
    int pivot_value = arr[high];
    int i = low - 1;
    
    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot_value)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1; 
}

int main()
{
    int i = 0;
    int arr[] = {0,8, 5, 3, 8};
    int len = sizeof(arr) / sizeof(int);
    
    quicksort(arr, len);
    
    while(i < len)
    {
        printf("%d\n", arr[i++]);
    }
    return 0;
}