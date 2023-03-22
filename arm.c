#include<stdio.h>
int main (){
    int n,r,c,sum=0;
    printf("Enter n :");
    scanf("%d",&n);
    c=n;
    while ( n>0){
    r=n%10;
    sum=r*r*r+sum;
    n=n/10;
    }
    if(sum==c){
        printf("Armstrong No. ");
        
    }
    else{
        printf("Not a Armstrong No. ");
    }
    return 0;
    
}