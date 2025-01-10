#include<stdio.h>
int main()
{
    int arr[4],*pArr,i,sum=0;
    pArr=&arr[0];
    for(i=0;i<4;i++)
    {
        printf("enter arr%d]",i);
        scanf("%d",pArr+i);
        sum+=*(pArr+i);
    }
    printf("%d is the sum",sum);
}
