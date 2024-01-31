#include<iostream>
using namespace std;

int MaxProduct(int arr[], int length)
{
    
    int maxCount = 0;
    for (int i = 0; i < length; i++)
    {
        int count = 1;
        for (int j = i; j < length; j++)
        {
            if (count*arr[j] > count) 
            {
                count *= arr[j];
            }
            else
               break;
        }
        
        if (count > maxCount) 
        {
            maxCount = count;
        }
    }
    return maxCount;
}
 
int main()
{
    int n,i;
    cout << "Enter number of elements = ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements:\n";
    for(i=0; i<n; i++)
       cin >> arr[i];
    if(n==0)
    {
        cout << 0;
    }
    else
    {
        cout << "The maximum product of elements = " << MaxProduct(arr, n);
    }
    return 0;
}
