#include <stdio.h> //DONE
#include <math.h>

int main()
{
    int i,j,key,p=0,n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key value: ");
    scanf("%d", &key);

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(((arr[i]*arr[i])+(arr[j]*arr[j]))==key)
            {
                p=1;
                printf("The value of i and j for the key are: %d and %d", i,j);
                break;
            }
        }
    }
    if(p==0)
      printf("Key condition wasn't found.");
}