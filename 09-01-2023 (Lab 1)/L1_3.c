#include <stdio.h> //DONE

int main()
{
    int i,j,k,key,p=0,n;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int A[n];

    printf("Enter the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter the key value: ");
    scanf("%d", &key);

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(A[i]+A[j]>key)
            {
                break;
            }

            for(k=j+1; k<n; k++)
            {
                if((A[i]+A[j]+A[k])==key)
                {
                    p=1;
                    printf("\nThe value of i, j and k for the key are: %d, %d and %d", i,j,k);
                    break;
                }
                else if(A[i]+A[j]+A[k]>key)
                {
                    break;
                }
            }
        }
    }
    if(p==0)
      printf("Key condition wasn't found.");
}