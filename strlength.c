#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[20];
    printf("enter a string:");
    scanf("%s",str);
    
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    printf("length of the string is %d",i);
    return 0;
}
