#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *next;
};
struct node *head=NULL,*newnode,*temp;
void insert()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nenter the value:");
    scanf("%d",&newnode->value);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
}
void delete()
{
    struct node *prevnode;
    temp=head;
    while(temp->next!= NULL)
    {
        prevnode=temp;
        temp=temp->next;
    }
    printf("\n%d popped\n",temp->value);
    prevnode->next=NULL;
    temp=prevnode;
}
void display()
{
    temp=head;
    do{
        printf("%d\t",temp->value);
        temp=temp->next;
    }while(temp != NULL);
}
int main()
{
    int choice;
    do{
        printf("\n1.insert\n2.delete\n3.display\n4.exit\nenter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                break;  
        }
    }while(1);
    return 0;
}
