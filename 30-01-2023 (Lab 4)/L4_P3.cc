#include <iostream>
using namespace std;
 
void findMinAndMax(int arr[], int low, int high, int &min, int &max)
{
    if (low == high)                  
    {
        if (max < arr[low]) {          
            max = arr[low];
        }
 
        if (min > arr[high]) {         
            min = arr[high];
        }
 
        return;
    }
 
    //Array containing only two elements
 
    if (high - low == 1)                
    {
        if (arr[low] < arr[high])     
        {
            if (min > arr[low]) {     
                min = arr[low];
            }
 
            if (max < arr[high]) {    
                max = arr[high];
            }
        }
        else {
            if (min > arr[high]) {    
                min = arr[high];
            }
 
            if (max < arr[low]) {     
                max = arr[low];
            }
        }
        return;
    }
 
    int mid = (low + high) / 2;
 
    // recur for the left subarray
    findMinAndMax(arr, low, mid, min, max);
 
    // recur for the right subarray
    findMinAndMax(arr, mid + 1, high, min, max);
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
   
    int max = arr[0], min = arr[0];
 
    findMinAndMax(arr, 0, n - 1, min, max);
 
    cout << "The minimum element of array is: " << min;
    cout << "\nThe maximum element of array is: " << max;
 
    return 0;
}