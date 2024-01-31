#include <stdio.h> //DONE

int main()
{
    int i,j,k,p=0,n;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int A[n];

    printf("Enter the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }

    for(i=0; i<n; i++)
    {
        if(A[i+1]<A[i])
        {
            k=i;
            for(j=k+1; j<n-1; j++)
            {
                if(A[j+1]>A[j])
                {
                    p=1;
                    printf("No value of k is found in array.");
                    break;
                }
            }
        }
        if(p==1)
        {
            break;
        }
    }
    if(p==0)
    {
        printf("The value of k is -> %d", k);
    }
}