
#include<stdio.h>
int euclid(int a, int b) {
    int temp;
    while(b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int consecutive(int a, int b) {
    int min = (a < b) ? a : b;
    int gcd = 1;
    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}
int sieve[1000];
void primeSieve(int n) 
{ 
    sieve[0] = sieve[1] = 1;
    for (int i = 2; i <= n; i++) {
        if (sieve[i] == 0) {
            for (int j = i + i; j <= n; j += i) {
                sieve[j] = 1;
            }
        }
    }
}
int eratosthenes(int a, int b) 
{
    primeSieve(1000);
    int gcd = 1;
    for (int i = 2; i <= a && i <= b; i++) {
        if (sieve[i] == 0 && a % i == 0 && b % i == 0) {
            gcd *= i;
            a /= i;
            b /= i;
            i--;
        }
    }
    return gcd;
}
int main(){
    int i,j,r; 
    printf("Enter two integer numbers: ");
    scanf("%d%d",&i,&j);
    printf("GCD using Eculidean method is: %d\n",euclid(i,j));
    printf("GCD using consecutive method is: %d\n",consecutive(i,j));
    printf("GCD using Eratosthenes method is: %d\n",eratosthenes(i,j));
    return 0;
}