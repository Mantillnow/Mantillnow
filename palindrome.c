#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],str2[20];
    printf("enter a string:");
    scanf("%s",str);
   
    int i=0,j=0;
    while (str[i]!='\0')
    {
        i++;
    }
    i--;
    while(j<=i){
        if (str[i]==str[j])
        {
            j++;
            i--;
        }
        else{
            printf("not a palindrome");
            return 0;
        }
    }
    printf("palindrome");
    return 0;
}
