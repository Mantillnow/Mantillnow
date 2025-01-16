#include<stdio.h>
int fact(int n)
{
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int n;
    printf("enter the value for n:");
    scanf("%d",&n);
    
    int f=fact(n);
    printf("factorial of num = %d",f);
   
    return 0;
}       
