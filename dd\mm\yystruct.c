#include<stdio.h>
#include<stdlib.h>
struct date{
    int dd,yy;
    char mm[10];
};
int main(){
    struct date d[10];
    int i=0;
    for(;i<2;i++){
        printf("enter date:");
        scanf("%d",&d[i].dd);
        printf("enter month:");
        scanf("%s",d[i].mm);
        printf("enter year:\n");
        scanf("%d",&d[i].yy);
    }
    for(i=0;i<2;i++){
        printf("%d/%s/%d\n",d[i].dd,d[i].mm,d[i].yy);
    }
    return 0;
}
