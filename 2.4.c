#include<stdio.h>
int main()
{
    int n,i,*pArr,gnum;
    printf("enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    pArr=arr;
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d]:",i);
        scanf("%d",pArr+i);
    }
    gnum=*pArr;
    for(i=0;i<n;i++)
    {
        if(gnum< *(pArr+i))
        {
            gnum= *(pArr+i);
        }
    }
    printf("greatest number is %d",gnum);
}
