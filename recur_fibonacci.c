#include<stdio.h>
int fibonacci(int n)
{
    if(n==0){
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    printf("enter the value for n:");
    scanf("%d",&n);
    
    int f=fibonacci(n);
    printf("finbonnaci num = %d",f);
   
    return 0;
}       
