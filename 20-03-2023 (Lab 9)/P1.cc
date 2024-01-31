//Longest Common Subsequence (LCS) using Dynamic Programming
#include <iostream>
using namespace std;

int main()
{
    int m,n,i,j;
    cout << "Enter number of characters in X and Y arrays respectively: ";
    cin >> m >> n;
    char X[m+1], Y[n+1];
    cout << "\nEnter the characters in X:\n";
    for (i=1; i<m+1; i++) //Starting from i=1, 'cause later in 2D array, will store from there.
    {
        cin >> X[i];
    }
    cout << "\nEnter the characters in Y:\n";
    for (i=1; i<n+1; i++)
    {
        cin >> Y[i];
    }

    // for (i=1; i<n+1; i++)
    // {
    //     cout << X[i] << Y[i] << endl;
    // }

    int Z[m+1][n+1];
    char arrow[m+1][n+1];

    for(i=0; i<m+1; i++) //Initialising 1st row and column to '0'
    {
        for(j=0; j<n+1; j++)
        {
            // if(i==0 || j==0)
                Z[i][j] = 0;
        }
    }

    // for(i=0; i<m+1; i++) //Displaying matrix
    // {
    //     for(j=0; j<n+1; j++)
    //     {
    //         cout << Z[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for(i=1; i<m+1; i++)
    {
        for(j=1; j<n+1; j++)
        {
            if(X[i] == Y[i])
            {
                // cout << "\nX[i][j] = " << X[i] << "   AND Y[i][j] = " << Y[j];
                Z[i][j] = (Z[i-1][j-1])+1;
                arrow[i][j] = 'D';
            }
            else
            {
                if(Z[i-1][j] > Z[i][j-1]) // if top > left
                {
                    Z[i][j] = Z[i-1][j];
                    arrow[i][j] = 'T';
                }
                
                else if(Z[i-1][j] == Z[i][j-1]) // if top == left
                {
                    Z[i][j] = Z[i-1][j];
                    arrow[i][j] = 'T';
                }

                else // if top < left
                {
                    Z[i][j] = Z[i][j-1];
                    arrow[i][j] = 'L';
                }
            }
        }
    }


    cout << "\n\n";
    for(i=0; i<m+1; i++) //Displaying matrix
    {
        for(j=0; j<n+1; j++)
        {
            cout << Z[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\n\nARROW:\n";
    for(i=0; i<m+1; i++) //Displaying matrix
    {
        for(j=0; j<n+1; j++)
        {
            cout << arrow[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nLength of LCS = " << Z[m][n];
}