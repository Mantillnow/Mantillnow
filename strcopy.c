#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[20],str2[20];
    printf("enter a string:");
    scanf("%s",str);
    printf("enter string 2:");
    scanf("%s",str2);
    
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    int j=0;
    while(str2[j]!='\0')
    {
        str[i]=str2[j];
        j++;
        i++;
    }
    printf("%s",str);
    return 0;
}
