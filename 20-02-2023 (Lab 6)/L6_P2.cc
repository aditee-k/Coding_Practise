#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of activities: ";
    cin>>n;
    int s[n], f[n];

    cout << "Enter their starting and finishing time respectively:\n";
    for (int i = 0; i < n; i++)
    {
        cin>>s[i] >> f[i];
    }

    int select[n], i=0, m=0;
    
    select[m]=0;
    m=m+1;
    for (int j = 1; j < n; j++)
    {
        if (s[j] >= f[i])
        {
            select[m]=j;
            i=j;
            m++;
        }
    }
    
    cout << "The selected activities are:\n";
    for (int i = 0; i < m; i++)
    {
        cout<<select[i]<<" ";
    }
    return 0;
}