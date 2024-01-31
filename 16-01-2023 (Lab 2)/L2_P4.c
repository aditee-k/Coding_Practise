#include<stdio.h>
#include<stdlib.h>

void second_largest(int *a, int n)
{
    int max1=a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i]>max1)
        {
            max1=a[i];
        }
    }

    int max2=a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i]>max2 && a[i]<max1)
        {
            max2=a[i];
        }
    }
    printf("\n2nd largest is: %d", max2);
}

void second_smallest(int *a, int n)
{
    int min1=a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i]<min1)
        {
            min1=a[i];
        }
    }

    int min2=a[2];
    for (int i = 0; i < n; i++)
    {
        if (a[i]<min2 && a[i]>min1)
        {
            min2=a[i];
        }
    }
    printf("\n2nd smallest is: %d", min2);
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        int b=rand();
        a[i]=b;
    }
    
    printf("The given array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    second_largest(a, n);
    second_smallest(a, n);
    return 0;
}