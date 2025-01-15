#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[20],str2[20];
    printf("enter a string:");
    scanf("%s",str);
    printf("enter string 2:");
    scanf("%s",str2);
    
    int i=0,flag=0;
    while (str[i]!='\0')
    {
        if (str[i]==str2[i])
        {
            i++;
        }
        else{
            flag=1;
            break;
        }
    }
    
    if (flag!=0){
        printf("not equal");
    }
    else{
        printf("equal");
    }
    return 0;
}
