//Length of longest substring without repetition of characters
#include<iostream>
using namespace std;
int count[256];

int main()
{   
    string s;
    cout<<"Enter the string : ";
    cin >>s;
    int i=0,j=0,ans=0;
    
    for(j=0;j<s.size();j++)
    {
        count [s[j]]++;
        
        while (count [s[j]] > 1)
        {
            count [s[j]]--;
            i++;
        }
        
    ans = j-i+1;
    }
    cout << "The length of longest substring = " << ans;
    return 0;
} 