#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[20],str2[20];
    printf("enter a string:");
    scanf("%s",str);
    
    int i=0;
    while(str[i]!='\0')
    {
        str2[i]=str[i];
        i++;
    }
    str2[i]='\0';
    printf("%s",str2);
    return 0;
}
