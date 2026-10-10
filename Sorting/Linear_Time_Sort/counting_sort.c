#include <stdio.h>
#include <string.h>

void countingSort(int arr[], int size)
{
    
    //값의 범위 찾기
    int max = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    //count 배열 생성
    int count[max+1];
    for(int i = 0; i < max+1; i++)
    {
        count[i] = 0;
    }

    for(int i = 0; i < size; i++)
    {
        count[arr[i]] = count[arr[i]] + 1;
    }
    
    //누적 count
    for(int i = 1; i < max+1; i++)
    {
        count[i] = count[i] + count[i-1];
    }

    //원본 배열 A를 뒤에서부터 결과 배열 B에 넣음
    int result[size];
    for(int i = size-1; i>=0; i--)
    {
        result[count[arr[i]] -1] = arr[i];
        count[arr[i]]--;
    }

    memcpy(arr, result, sizeof(int) * size);
}

int main(void)
{
    int arr[] = {2,5,3,0,2,3,0,3};
    int size = sizeof(arr) / sizeof(int); 

    for(int i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    } printf("\n");

    countingSort(arr, size);

    for(int i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    } printf("\n");

}