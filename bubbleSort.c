#include<stdio.h>
#include<stdlib.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j, swapNum;
    for (i = 0; i < n-1; i++)
    {
        swapNum = 0;
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                swapNum++;
            }
        }
        printf("Pass #%d: %d\n", i+1, swapNum);
    }
}

int main()
{
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    bubbleSort(arr, 9); 
    return 0;
}