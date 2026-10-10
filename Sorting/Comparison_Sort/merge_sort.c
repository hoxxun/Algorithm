#include <stdio.h>

void mergeSort(int arr[], int l, int r)
{
    if(l >= r)
        return;

    int m = (l+r)/2;
    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);
    merge(arr, l, m, r);
}