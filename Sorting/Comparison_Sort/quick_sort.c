#include <stdio.h>

int partition(int arr[], int l, int r) 
{   
    int j;
    int i = l -1;
    int pivot = arr[r];
    
    for(j=l; j<r; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i+1], pivot);

    return i + 1; //현재 pivot의 위치를 반환
}

void quickSort(int arr[], int l, int r)
{
    if(l>=r)
        return;

    int p = partition(arr, l, r);
    quickSort(arr, l, p-1); //pivot 기준 왼쪽 재귀
    quickSort(arr, p+1, r); //pivot 기준 오른쪽 재귀
}