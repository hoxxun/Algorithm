#include <stdio.h>

int main(void)
{
    int arr[5] = {6,1,8,4,2};
    int temp;
    int size = sizeof(arr) / sizeof(int);

    for(int i = 1; i < size + 1; i++)
    {
        for(int j = 1; j < size  +1 -i; j++)
        {
            if(arr[j] < arr[j-1])
            {
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }

    for(int i = 0; i < size; i++) 
        printf("%d",arr[i]);
    printf("\n");

    return 0;
}

