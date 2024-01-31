#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    int i,s=1;

    printf("Enter the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        s *= arr[i];
    }

    printf("Elements of the modified array are: ");
    for(i=0; i<n; i++)
    {
        arr[i] = s/arr[i];
        printf("%d ", arr[i]);
    }
}