#include <iostream>  
using namespace std; 

int main ()  
{  
    int st, mid, end, i, num, target;  
      
    cout << "Define the size of the array: " << endl;  
    cin >> num; 
    int arr[num];
    cout << "Enter values in ascending order: ";  
    
    for (i = 0; i < num; i++)  
        cin >> arr[i];  
      
    st = 0;  
    end = num - 1;
      
    cout << "Enter value to be searched, from sorted array: ";  
    cin >> target;  
      
    while ( st <= end)  
    {  
        mid = ( st + end ) / 2;  
        if (arr[mid] == target)  
        {  
            cout << "Element is found at index " << (mid + 1);  
            exit (0);
        }  
        
        else if ( target > arr[mid])  
        {  
            st = mid + 1; 
        }  
            
        else 
        {  
            end = mid - 1;   
        } 
    }  
    cout << "Number is not found.";  
    return 0;  
}   