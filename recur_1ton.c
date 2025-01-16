#include<stdio.h>
void disp(int n)
{
    if (n>0)
    {
        disp(n-1);
        printf("%d\t",n);
        
    }
}
int main()
{
    int n;
    printf("enter the value for n:");
    scanf("%d",&n);
    disp(n);
    return 0;
}
