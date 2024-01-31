//DAA Assignment 2
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,z,flag;
    cout << "Enter number of elements: ";
    cin >> n;
    int A[n];
    cout << "Enter values of array's elements:\n";
    for(i=0; i<n; i++)
    {
        cin >> A[i];
    }
    cout << "Enter the value of z: ";
    cin >> z;

    for(i=1; i<n; i++)
    {
        if(A[i-1] >= A[i])
        {
            if(A[i]<A[i+1])
            {
                flag=i;
                break;
            }
        }
    }
    for(i=0; i<=flag; i++)
    {
        for(j=flag; j<n; j++)
        {
            if(A[i]+A[j]==z)
            {
                cout << z <<" is the sum of " << A[i] <<" and " << A[j] << endl;
            }
        }
    }
}