#include <stdio.h>

void makeHeap(int arr[], int n)
{
    //주어진 배열로 MaxHeap을 만드는 함수
}

void swap(int * a, int * b)
{
    //배열의 첫번째 원소와 마지막 원소를 바꿔주는 함수
    //MaxHeap의 최대값이 배열의 뒤로감
}
void heapify(int arr[], int heapsize)
{
    //heapsize만큼의 노드를 다시 maxHeap으로 재배치하는 함수
}

void heapSort(int arr[], int n)
{
    int heapsize = n;
    makeHeap(arr, n);

    for(int i=0; i < n-1; i++)
    {
        swap(&arr[0], &arr[heapsize-1]);
        heapsize = heapsize - 1;
        heapify(arr, heapsize);
    }
}
