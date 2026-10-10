#include <stdio.h>

void swap(int * a, int * b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int size)
{
    int i,j;
    for(i = 0; i < size - 1; i++)
    {
        for(j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main(void)
{
    int arr[5] = {6,1,8,4,2};
    int size = sizeof(arr) / sizeof(int);

    for(int i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    } printf("\n");
    
    bubbleSort(arr, size);

        for(int i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    } printf("\n");

    return 0;
}