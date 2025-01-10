#include<stdio.h>
int sum(int pA,int pB)
{
    return pA+ pB;
}
int main()
{
    int a,b,*pA,*pB;
    pA=&a;
    pB=&b;
    printf("enter num1:");
    scanf("%d",pA);
    printf("enter num2:");
    scanf("%d",pB);
    
    int s;
    s=sum(*pA,*pB);
    printf("the sum is %d",s);
    return 0;
}
