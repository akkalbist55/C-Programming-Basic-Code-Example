// *Array implementation of linear queue*/
#include<stdio.h>
#define SIZE 20
struct queue
{
int item[SIZE];
int rear;
int front;
};
typedef struct queue qu;
void insert(qu*);
void delet(qu*);
void display(qu*);
void main()
    {
        int ch;
        qu *q;
        q->rear=-1;
        q->front=0;
        printf("Menu for program:\n");
        printf("1:insert\n2:delete\n3:display\n4:exit\n");
        do
        {
            printf("Enter youer choice\n");
            scanf("%d",&ch);
            switch(ch)
            {
            case 1:
            insert(q);
            break;
            case 2:
            delet(q);
            break;
            case 3:
            display(q);
            break;
            case 4:
            //exit(0);
            break;
            default:
            printf("Your choice is wrong\n");
            }
        }while(ch<5);
    }

/**********insert function*************/
void insert(qu *q)
    {
    int d;
    printf("Enter data to be inserted\n");
    scanf("%d",&d);
    if(q->rear==SIZE-1)
    {
    printf("Queue is full\n");
    }
    else
    {
    q->rear++;
    q->item[q->rear]=d;
    }
    }

/***********delete function*****************/
void delet(qu *q)
    {
    int d;
    if(q->rear<q->front)
    {
    printf("Queue is empty\n");
    }
    else
    {
    d=q->item[q->front];
    q->front++;
    printf("Deleted item is:");
    printf("%d\n",d);
    }
    }

/**************display function***********/
    void display(qu *q)
    {
    int i;
    if(q->rear<q->front)
    {
    printf("Queue is empty\n");
    }
    else
    {
    for(i=q->front;i<=q->rear;i++)
    {
    printf("%d\t",q->item[i]);
    }
    }
}
