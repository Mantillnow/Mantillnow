#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i;
    printf("enter the no of elements:");
    scanf("%d",&n);
    p = (int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d]:",i);
        scanf("%d",p+i);
    }
    printf("%d is the last element",*(p+n-1));
    free(p);
    return 0;
}
