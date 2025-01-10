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
        *(p+i)+=1;
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
    free(p);
    return 0;
}
