#include <iostream>
#include <cstring>
using namespace std;

int LCSLength(string str1, string str2)
{
    int m = str1.length();
    int n = str2.length();

    int lcs[m+1][n+1];

    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(i == 0 || j == 0)
                lcs[i][j] = 0;

            else if(str1[i-1] == str2[j-1])
                lcs[i][j] = lcs[i-1][j-1] + 1; //Diagonal element + 1

            else
                lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]); //Choosing max. between top and left
        }
    }
    return lcs[m][n];
}

// Function to find the longest common subsequence
string lcs(string str1, string str2)
{
    int m = str1.length();
    int n = str2.length();

    int lcs[m+1][n+1];

    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(i == 0 || j == 0)
                lcs[i][j] = 0;

            else if(str1[i-1] == str2[j-1])
                lcs[i][j] = lcs[i-1][j-1] + 1;

            else
                lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
        }
    }

    // For longest common subsequence
    int index = lcs[m][n];
    char lcsStr[index+1];
    lcsStr[index] = '\0';

    int i = m, j = n;
    while(i > 0 && j > 0)
    {
        if(str1[i-1] == str2[j-1])
        {
            lcsStr[index-1] = str1[i-1];
            i--;
            j--;
            index--;
        }

        else if(lcs[i-1][j] > lcs[i][j-1])
            i--;
        else
            j--;
    }
    return lcsStr;
}

int main()
{
    string str1 = "ABACA";
    string str2 = "BCBBA";

    cout << "Length of LCS: " << LCSLength(str1, str2) << endl;
    cout << "LCS: " << lcs(str1, str2) << endl;

    return 0;
}
