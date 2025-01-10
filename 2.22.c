#include<stdio.h>
int main()
{
    int arr[4],temp[4],i,*pArr;
    pArr=&arr[0];
    for(i=0;i<4;i++)
    {
        printf("enter a[%d]",i);
        scanf("%d",pArr+i);
    }
    
    int end=3;
    for(i=0;i<4;i++)
    {
        temp[i]=*(pArr+end);
        end--;
    }
    
    for(i=0;i<4;i++)
    {
        printf("%d\t",temp[i]);
    }
}
