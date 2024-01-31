#include <iostream>
using namespace std;

void MajoritySequence(int arr[], int n)
{
    int maxCount = 0, index = -1;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i; j < n; j++)
        {
            if (count+arr[j] > count) 
            {
                count += arr[j];
            }
            else
               break;
        }
        
        if (count > maxCount) 
        {
            maxCount = count;
        }
    }
 
    cout << "Maximum sum of elements in sequence = " << maxCount;

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
 
    MajoritySequence(arr, n);
 
    return 0;
}