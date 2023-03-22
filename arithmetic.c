#include<stdio.h>
int main()
{
    int i=9,j=3,k;
    k=i+j;
    printf("The addition of %d and %d is %d",i,j,k);
    k=i-j;
    printf("The subtraction of %d and %d is %d",i,j,k);
    k=i*j;
    printf("The multiplication of %d and %d is %d",i,j,k);
    k=i/j;
    printf("The division if %d and %d is %d",i,j,k);
    return 0;
}