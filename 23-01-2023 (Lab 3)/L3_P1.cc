#include <iostream>
using namespace std;

void Majority(int arr[], int n)
{
    int maxCount = 0, index = -1;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
 
        if (count > maxCount) 
        {
            maxCount = count;
            index = i;
        }
    }
 
    if (maxCount > n / 2)
        cout << "The element which occurs for more than n/2 times is: " << arr[index];
 
    else
        cout << "No element found which occurs for more than n/2 times.";
}
 
int main()
{
    int n,i;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements:\n";
    for(i=0; i<n; i++)
       cin >> arr[i];
 
    Majority(arr, n);
 
    return 0;
}