#include <iostream>
using namespace std;

int MaxProduct(int arr[], int length) {
    if (length == 0)
        return 0;

    int max_product = arr[0];
    int current_max = arr[0];
    int current_min = arr[0];

    for (int i = 1; i < length; i++) {
        if (arr[i] < 0) {
            swap(current_max, current_min);
        }

        current_max = max(arr[i], current_max * arr[i]);
        current_min = min(arr[i], current_min * arr[i]);

        max_product = max(max_product, current_max);
    }

    return max_product;
}

int main() 
{
    int i,n;
    cout << "Enter number of elements: ";
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