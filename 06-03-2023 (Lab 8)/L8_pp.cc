#include <bits/stdc++.h>
using namespace std;

void matrix_chain_order(int p[], int n, int m[][7], int s[][7])
{
    int j=0, q=0;
    for (int i = 1; i <= n; i++)
    {
        m[i][i]=0;
        s[i][i]=0;
    }
    for (int l = 2; l <= 6; l++)
    {
        for (int i=1; i <= n-l+1; i++)
        {
            j=i+(l-1);
            m[i][j]=INT_MAX;
            for (int k = i; k <= j-1; k++)
            {
                q=m[i][k]+m[k+1][j]+(p[i-1]*p[k]*p[j]); //Formula
                if (q<m[i][j])
                {
                    m[i][j]=q;
                    s[i][j]=k;
                }
            }
        }
    }

    cout<<"Printing m:\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<m[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"Printing s:\n";
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = 2; j <= n; j++)
        {
            cout<<s[i][j]<<"\t";
        }
        cout<<endl;
    }
    
}

void Print_optimal_soln(int s[][7], int i, int j)
{
    if (i==j)
    {
        cout<<"A"<<i<<" ";
    }
    else
    {
        cout << "(";
        Print_optimal_soln(s, i, s[i][j]);
        Print_optimal_soln(s, (s[i][j]+1), j);
        cout << ")";
    }
    
}

int main()
{
    int p[7]={2,6,2,8,4,4,4};
    int n=6;
    int m[7][7], s[7][7];
    matrix_chain_order(p, n, m, s);
    cout<<"\n\n";
    Print_optimal_soln(s, 1, 6);
    return 0;
}