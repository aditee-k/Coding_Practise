#include<iostream>
using namespace std;

int power(int b,int e)
{
    if(e==0)
        return 1;
    else 
        return (b*power(b,e-1));
}
int main()
{
    int base,exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    cout << "Power(" << base << "^" << exponent << ") = " << power (base, exponent);
    return 0;
}