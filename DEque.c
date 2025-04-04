#include<stdio.h>
#define size 5
int front=-1,rear=-1,queue[size];
int isempty()
{
    return (front==-1 || front==rear);
}
int isfull()
{
    return(rear==size-1);
}
void fenque()
{
    if(front>0)
    {
        printf("\nenter the element:");
        scanf("%d",&queue[--front]);
    }
    else{
        printf("\ncan't insert at front\n");
    }
}
void renque()
{
    if(!isfull())
    {
        if(front==-1)
        {
            front=0;
            rear=0;
        }
        printf("\nenter the element to insert:");
        scanf("%d",&queue[rear]);
        rear++;
    }
    else{
        printf("\nqueue is full\n");
    }
}
void fdeque()
{
    if(!isempty())
    {
        printf("\n%d deleted from front\n",queue[front]);
        front++;
    }
    else{
        printf("\n queue is empty\n");
    }
}
void rdeque()
{
    if(!isempty())
    {
        printf("\n%d deleted from rear\n",queue[--rear]);
    }
    else{
        printf("\nqueue is empty\n");
    }
}
void display()
{
    int i=front;
    while(i<rear)
    {
        printf("%d\t",queue[i]);
        i++;
    }
}
int main()
{
    int choice;
    do{
        printf("\n1.f_enqueu\n2.r_enque\n3.f_deque\n4.r_deque\n5.display\n6.exit\nenter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            fenque();
            break;
        case 2:
            renque();
            break;
        case 3:
            fdeque();
            break;
        case 4:
            rdeque();
            break;
        case 5:
            display();
            break;
        case 6:
            return 0;
        default:
            break;
        }
    }while(1);
    return 0;
}
