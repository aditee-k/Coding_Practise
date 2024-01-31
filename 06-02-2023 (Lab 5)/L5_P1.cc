#include <iostream>
using namespace std;
#define Max 100

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1; //Formula for left node
    int r = 2 * i + 2; //Formula for right node
 
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
 
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}
 
void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    for (int i = n - 1; i >= 0; i--) 
    {
        swap(arr[0], arr[i]);
 
        heapify(arr, i, 0);
    }
}
 
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
 
int main()
{
    int n,i,ch, arr[Max], ind, n1;
    a:
    cout << "MENU:\nPress 0 to exit program.\nPress 1 to enter elements in the array.\nPress 2 to display the array.\n";
    cout << "Press 3 to sort array in ascending order using Heap Sort.\nPress 4 to extract largest element.\nPress 5 to replace an index's value.\n";
    cout << "Enter choice: ";
    cin >> ch;

    switch(ch)
    {
        case 0: exit(0);

        case 1: cout << "Enter number of elements: ";
                cin >> n;
                cout << "Enter the elements: ";
                for(i=0; i<n; i++)
                   cin >> arr[i];
                goto a;
            
        case 2: printArray(arr, n);
                goto a;

        case 3: for(i=n/2 -1;i>=0;i--)
                   heapify(arr,n,i);
                heapSort(arr, n);
                goto a;

        case 4: cout << "Largest element is: " << arr[n-1];
                goto a;

        case 5: cout << "Enter index and new number: ";
                cin >> ind >> n1;
                arr[ind] = n1;
                for(i=n/2 -1;i>=0;i--)
                   heapify(arr,n,i);
                heapSort(arr, n);
                goto a;

        default: "Invalid choice!\n"; goto a;
    }
}