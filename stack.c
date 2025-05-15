#include<stdio.h>
#define MAX 5
int stack[MAX],top=-1;
int stackempty()
{
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int stackfull()
{
    return top==MAX?1:0;
}
void push()
{
    if(!stackfull()){
        top++;
        printf("\nenter the element to be inserted:");
        scanf("%d",&stack[top]);
    }
    else{
        printf("\nstack overflow!!\n");
    }
}
void pop()
{
    if(stackempty())
    {
        printf("\nstack underflow\n");
    }
    else{
       printf("\n%d popped",stack[top]);
       top--;
    }
}
void display(){
    int i;
    if(stackempty())
    {
        printf("stack underflow");
    }
    else{
        for(i=0;i<=top;i++)
        {
            printf("%d\t",stack[i]);
        }
    }
}
int main()
{
    int choice;
    do{
        printf("1.push\n2.pop\n3.display\n4.exit\nenter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
                break;
            default:
                break;
        }
    }while(1);
    return 0;
}
