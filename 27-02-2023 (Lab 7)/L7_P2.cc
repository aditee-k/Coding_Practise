//Find min. number of platforms to accomodate all trains.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the number of trains entering the platform: ";
    cin>>n;
    int a[n], d[n], c[n+n], count=0, j=0, max=0;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter arrival and departure time for train " << i+1 << ":\n";
        cin >> a[i] >> d[i];
        c[j]=a[i];
        j++;
        c[j]=d[i];
        j++;
    }

    bubbleSort(c, n+n);

    for (int i = 0; i < n+n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(c[i]==a[j])
            {
                count++;
            }
            if (c[i]==d[j])
            {
                count--;
            }
            if(count>max)
            {
                max=count;
            }
        }       
    }
    cout<<"\nMinimum number of stations required is: "<<max;
}