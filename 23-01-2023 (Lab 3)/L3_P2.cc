#include<iostream>
using namespace std;

int main()
{
    float n;
    cout << "Enter a num: ";
    cin >> n;
    
    int i, root2=0, flag=0;
    for (i = 1; i < (n/2 + 1); i++)
    {
        int product=i*i;
        if (product==(int)n)
        {
            root2=i;
            flag+=1;
            break;
        }
    }
    if (flag==1)
    {
        cout << "The square root is: %d" << root2;
    }
    if (flag==0)
    {
        cout << "The square root is not found.\n";
    }
    return 0;
}