#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],str2;
    printf("enter a string:");
    scanf("%s",str);
    printf("\n ente the character you want to search:");
    getchar();
    scanf("%c",&str2);
    
    int i=0,flag=0;
    while (str[i]!='\0')
    {
        if(str[i]==str2)
        {
            flag++;
            i++;
        }
        else{
            i++;
        }
    }
    printf("%d occurences",flag);
    return 0;
}
