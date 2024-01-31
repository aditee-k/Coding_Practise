#include<iostream>
using namespace std;

int main()
{
    int i,n=5, arr[5]={1,2,3,4,5}, num;
    
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            cout << "It's an even number!";
        }
        else
        {
            cout << "It's an odd number";
        }
    }
}