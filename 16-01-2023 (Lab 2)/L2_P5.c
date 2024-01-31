#include<stdio.h>

void swap(int *a, int n)
{
    if (n%2==0)
    {
        for (int i = 0; i < n; i=i+2)
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    else
    {
        for (int i = 0; i < n-1; i=i+2)
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
}

void dis(int *a, int n)
{
    printf("The array now is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter values:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("The given array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    swap(a, n);
    dis(a,n);
    return 0;
}