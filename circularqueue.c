#include <stdio.h>
#define MAX 5
int queue[MAX],front=-1,rear=-1;
int q_empty()
{
    return(front==-1&&rear==-1);
}
int q_full()
{
    return (front==((rear+1)%MAX));
}
void enqueue()
{
    if(!q_full())
    {
        if(q_empty()){
            rear=front=0;
        }
        else{
            rear=(rear+1)%MAX;
        }
        printf("\nenter the element:");
        scanf("%d",&queue[rear]);
        
    }
    else{
        printf("\nqueue overflow\n");
        return;
    }
}
void dequeue(){
    if(!q_empty())
    {
        printf("\n%d dequeued\n",queue[front]);
        if(front==rear)
        {
            front=rear=-1;
        }
        else
            front=(front+1)%MAX;
    }
    else{
        printf("\nqueue underflow\n");
    }
}
void display()
{
    int i=front;
    if(q_empty())
    {
        printf("\nqueue is empty\n");
    }
    else{
        while(1)
        {
            printf("%d\t",queue[i]);
            if(i==rear){
                break;
            }
            i=(i+1)%MAX;
        }
    }
    printf("\n");
}
int main() {
    int choice;
    do{
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\nenter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
                break;
        }
    }while(1);
 
    return 0;
 }
