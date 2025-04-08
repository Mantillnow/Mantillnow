#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *next,*prev;
};
struct node *newnode,*head=NULL,*temp=NULL;
int isempty()
{
    return(head==NULL);
}
void insert_end()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nenter the element:");
    scanf("%d",&newnode->value);
    newnode->next=NULL;
    if(isempty())
    {
        head=temp=newnode;
        newnode->prev=NULL;
    }
    else{
        newnode->prev=temp;
        newnode->next=NULL;
        temp->next=newnode;
        temp=newnode;
    }
}

void insert_front()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the element:");
    scanf("%d",&newnode->value);
    if(isempty())
    {
        head=temp=newnode;
        newnode->next=NULL;
        newnode->prev=NULL;
    }
    else{
        newnode->prev=NULL;
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}

void delete_front()
{  
    if(isempty())
    {
        printf("\ndeletion not possible\n");
    }
    else{
        printf("\n%d deleted\n",head->value);
        head=head->next;
    }
}

void delete_rear()
{
    if (isempty())
    {
        printf("\nDeletion not possible (list is empty).\n");
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        printf("\n%d deleted\n", temp->value);
        if (temp->prev == NULL)
        {
            head = NULL;
        }
        else
        {
            temp->prev->next = NULL;
        }

        free(temp); 
    }
}


void display(){
    if(isempty())
    {
        printf("\nempty\n");
    }
    else{
        temp=head;
        while(temp!=NULL)
        {
            printf("%d\t",temp->value);
            temp=temp->next;
        }
    }
}
int main()
{
    int choice;
    do{
        printf("\n1.insert_front\n2.insert_end\n3.delete_front\n4.delete_rear\n5.display\nenter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                insert_front();
                break;
            case 2:
                insert_end();
                break;
            case 3:
                delete_front();
                break;
            case 4:
                delete_rear();
                break;
            case 5:
                display();
                break;
            case 6:
                return 0;
                break;
        }
    }while(1);
    return 0;
}
