#include<stdio.h>
int sum(int n)
{
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}
int main()
{
    int n;
    printf("enter the value for n:");
    scanf("%d",&n);
    
    int f=sum(n);
    printf("sum of num = %d",f);
   
    return 0;
}       
