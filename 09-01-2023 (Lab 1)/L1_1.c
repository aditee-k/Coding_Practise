#include <stdio.h> //DONE

int main()
{
    int i,num,p=0,n,index;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to be searched: ");
    scanf("%d", &num);

    for(i=0; i<n; i++)
    {
        if(num==arr[i])
        {
            index=i;
            p++;
        }
    }

    if(p==0)
      printf("Number wasn't found.");

    else if(p==1)
      printf("There were no duplicates of the number.\nIndex of the number = %d", index);

    else
       printf("There were duplicates found. Highest index of the number = %d", index);
      
}