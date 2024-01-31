#include<stdio.h>
int main()
{
    printf("A: %d", getpid());
    fork();
    printf("B: %d", getpid());
    
    fork();
    printf("C: %d", getpid());

}