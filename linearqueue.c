#include <stdio.h>
#define MAX 5
int queue[MAX],front=0,rear=0;
int qempty(){
 return front==rear?1:0;   
}
int qfull(){
    return rear==MAX?1:0;
}
void enqueue(){
    if(qfull())
    {
        printf("\nqueue is full\n");
    }
    else{
        printf("\nenter the element:");
        scanf("%d",&queue[rear]);
        rear++;
    }
}
void dequeue(){
    if(qempty())
    {
        printf("queue is empty");
    }
    else{
        printf("\n%d popped\n",queue[front]);
        front++;
        {
            if (qempty()) front=rear=0;
        }
    }
}
void display()
{
    int i=front;
    for(;i<rear;i++){
        printf("%d\t",queue[i]);
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
