#include<stdio.h>
void add(int a,int b)
{
    printf("addition %d",a+b);
}
void sub(int a , int b)
{
    printf("substraction %d",a-b);
}
void divi(int a , int b)
{
    printf("division %d",a/b);
}
void mult(int a, int b)
{
    printf("multiplication %d",a*b);
}
int main(){
    int n1,n2,*pN1,*pN2,a;
    pN1=&n1;
    pN2=&n2;
    printf("enter num 1");
    scanf("%d",pN1);
    printf("enter num 2:");
    scanf("%d",pN2);
    printf("\nchoose any option\n1.addition\n2.substraction\n3.multi[lication\n4.division");
    scanf("%d",&a);
    switch(a){
        case 1:
            add(*pN1,*pN2);
            break;
        case 2:
            sub(*pN1,*pN2);
            break;
        case 3:
            mult(*pN1,*pN2);
            break;
        case 4:
            divi(*pN1,*pN2);
            break;
        default:
            break;
    }
}
