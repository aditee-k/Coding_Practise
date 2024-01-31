#include <stdio.h>
#include <stdlib.h>
 
void InsertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) 
    {
        key = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void BubbleSort(int arr[], int n)
{
    int i,j,temp;
    for (i = 0 ; i < (n - 1); i++)
    {
        for (j= 0 ; j < n - i - 1; j++)
        {
            if(arr[j] < arr[j+1])
            {
                temp=arr[j];
                arr[j]   = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    int n,i;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int A[n];

    printf("Enter the elements:\n");
    for(i=0; i<n; i++)
    {
        A[i] = rand();
    }

    printf("\nInitial array:\n");
    display(A, n);
    InsertionSort(A, n);
    printf("\nAscending order using Insertion sort:\n");
    display(A, n);
    BubbleSort(A,n);
    printf("\nDescending order using Bubble sort:\n");
    display(A,n);
 
    return 0;
}