#include<stdio.h>
#define CUBE(x) x*x*x

void main()
{
    int a=2;

    printf("%d",CUBE(a++));
    printf("\n");
    printf("%d",CUBE(a--));
}
