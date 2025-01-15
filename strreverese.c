#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str1[10],str2[10];
    printf("enter string:");
    scanf("%s",str1);
    int i=0;
    while(str1[i]!=0)
    {
        i++;
    }
    i--;
    int j=0;
    while(i>=0)
    {
        str2[j]=str1[i];
        i--;
        j++;
    }
    str2[j]='\0';
    printf("%s",str2);
    return 0;
}
