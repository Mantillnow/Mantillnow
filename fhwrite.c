#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char a[100];
    fp=fopen("c1.txt","w");
    if(fp==NULL){
        printf("file not opened");
    }
    else{
        while(1){
            printf("enter the data or quit to terminate");
            scanf("%s",a);
            getchar();
            if (strcmp(a,"quit")==0)
            {
                break;
            }
            else{
                fprintf(fp,"%s\t",a);
            }
        }
        fclose(fp);
    }
    return 0;
}
