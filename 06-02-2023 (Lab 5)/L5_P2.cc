#include <iostream>
using namespace std;
#define Max 100

void printArray(int n, int arr[])
{
    cout << "The array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void min_heapify(int arr[], int n, int i)
{
    int smallest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] < arr[smallest])
    {
        smallest = l;
    }
    if (r < n && arr[r] < arr[smallest])
    {
        smallest = r;
    }
    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        min_heapify(arr, n, smallest);
    }
}

void heap_sort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        min_heapify(arr, n, i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        min_heapify(arr, i, 0);
    }
}
 
void bubbleSort(int array[], int size)
{
    for (int step = 0; step < (size - 1); ++step)
    {
        int swapped = 0;
        for (int i = 0; i < (size - step - 1); ++i)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}

int main()
{
    int n,i,ch, arr[Max], ind, n1;
    a:
    cout << "\nMENU:\nPress 0 to exit program.\nPress 1 to enter elements in the array.\nPress 2 to display the array.\n";
    cout << "Press 3 to sort array in descending order using Heap Sort.\nPress 4 to sort in ascending order using Bubble Sort.\nPress 5 to extract largest element.\nPress 6 to replace an index's value.\n";
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
            
        case 2: printArray(n, arr);
                goto a;

        case 3: heap_sort(arr, n);
                goto a;

        case 4: bubbleSort(arr, n);
                goto a;

        case 5: cout << "Smallest element is: " << arr[0];
                goto a;

        case 6: cout << "Enter index and new number: ";
                cin >> ind >> n1;
                arr[ind] = n1;
                heap_sort(arr, n);
                goto a;

        default: cout << "Invalid choice!\n"; goto a;
    }
}