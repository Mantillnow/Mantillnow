#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *next;
};
struct node *head=NULL,*temp,*newnode;
int isempty(){
    return(head==NULL);
}
void insert()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nenter the element:");
    scanf("%d",&newnode->value);
    newnode->next=NULL;
    if(isempty())
    {
        head=temp=newnode;
    }
    else{
        temp->next = newnode;
        temp=newnode;
    }
}
void delete()
{
    struct node *prevnode;
    if(isempty())
    {
        printf("\nempty list\n");
    }
    else{
        temp=head;
        while(temp->next != NULL){
            prevnode=temp;
            temp=temp->next;
        }
        if(head==temp)
        {
            printf("\n%d deleted",temp->value);
            free(head);
            head=temp=NULL;
            return;
        }
        printf("\n%d deleted",temp->value);
        prevnode->next=NULL;
        free(temp);
        temp=prevnode;
    }
}
void display()
{
    temp=head;
    if(isempty())
    {
        printf("\nempty\n");
    }
    else{
        do{
            printf("%d\t",temp->value);
            temp=temp->next;
        }while(temp!=NULL);
    }
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
        }
    }while(1);
    return 0;
}
