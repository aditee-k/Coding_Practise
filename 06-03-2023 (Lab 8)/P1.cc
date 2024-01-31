//Implement Matrix Chain Multiplication
//BUgs present
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print_optimal_parenthesis(int S[][5],int i, int j)
{
    if(i==j)
    {
        cout << "A" << i << " ";
    }
    else
    {
        cout << "( ";
        print_optimal_parenthesis(S,i,S[i][j]);
        print_optimal_parenthesis(S, S[i][j]+1,j);
        cout << " ) ";
    }
}

int Matrix_chain_order(int p[], int n)
{
    int m[n][n];
    int S[n-1][n-2];
    int i,j,k,l,q;
    for(i=1; i<n; i++)
    {
        m[i][i]=0;
        S[i][i]=0;
    }
    for(l=2; l<n; l++)
    {
        for(i=1; i<n-l+1; i++)
        {
            j = i+(l-1);
            m[i][j] = INT_MAX;
            for(k=i; k<=j-1; k++)
            {
                q = m[i][k] + m[k+1][j] + p[i-1] * p[k] * p[j];
                if(q<m[i][j])
                {
                    m[i][j]=q;
                    S[i][j]=k;
                }
            }
            
        }
    }
    print_optimal_parenthesis(S,1,5);
    return m[1][n-1];
}



int main()
{
    int arr[]={4,10,3,12,20,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Minimum number of multiplications is " << Matrix_chain_order(arr, size);
    return 0;
}

// int n,i;
//     cout << "Enter number of matrices: ";
//     cin >> n;
//     int p[n+1];
//     cout << "Enter the dimensions of the matrices:";
//     for(i=0; i<=n; i++)
//     {
//         cin >> p[i];
//     }