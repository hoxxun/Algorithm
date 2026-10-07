#include <stdio.h>

void insertionSort(int arr[], int size)
{
    int i, j, key;

    for(i=1; i<size; i++)
    {
        j = i-1;
        key = arr[i];

        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;   
        }
        arr[j+1] = key;
    }
}

int main(void)
{
    int arr[] = {6,1,8,4,2};
    int size = sizeof(arr)/sizeof(int);

    for(int i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    } printf("\n");

    insertionSort(arr, size);

    for(int i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    } printf("\n");
    
    return 0;
}