
//The following complete program illustrates the implementation of stack with operations

/* Array Implementation of Stack */
#include<stdio.h>
#define MAX 10
struct stack
    {
    int items[MAX]; //Declaring an array to store items
    int top;
    //Top of a stack
    };
        typedef struct stack st;
        void create_empty_stack(st *s); //function prototype
        void push(st *s, int);
        void pop(st *s);
        void display(st *s);

//Main Function
void main()
    {
        int element, choice;
        st *s;
        int flag=1;
        create_empty_stack(s); /* s->top=-1; indicates empty stack */
        do
        {
        printf("\n\n Enter your choice");
        printf(" \n\n\t 1:Push the elements");
        printf(" \n\n\t 2: To display the elements");
        printf(" \n\n\t 3: Pop the element");
        printf(" \n\n\t 4: Exit");
        printf("\n\n\n Enter of your choice:\t");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        printf("\n Enter the number:");
        scanf("%d", &element); /*Read an element from keyboard*/
        push(s,element);
        break;
        case 2:
        display(s);
        break;
        case 3:
        pop(s);
        break;
        case 4:
        flag=0;
        break;
        default:
        printf("\n Invalid Choice");
        }
        }while(flag);
    }

            /*Function to create an empty stack*/
            void create_empty_stack(st *s)
            {
            s->top=-1;
            }
            /*Function to check whether the stack is empty or not */
            int isempty(st *s)
            {
            if(s->top==-1)
            return 1;
            else
            return 0;
                        }
            /*function to check whether the stack is full or not*/
            int isfull(st *s)
            {
            if(s->top==MAX-1)
            return 1;
            else
            return 0;
            }
            /* push() function definition */
            void push(st *s, int element)
            {
            if(isfull(s)) /* Checking Overflow condition */
            printf("\n \nThe stack is overflow: Stack Full!!\n");
            else
            s->items[++(s->top)]=element;
            }
            /* Function for displaying elements of a stack*/
            void display(st *s)
            {
            int i;
            if(isempty(s))
            printf("\nThe Stack does not contain any Elements");
            else
            {
            printf("\nThe elements in the stack is/are:\n");
            for(i=s->top;i>=0;i--)
            printf("%d\n",s->items[i]);
            }
            }

            /* the POP function definition*/
            void pop(st *s)
            {
            if(isempty(s))
            printf("\n\nstack Underflow: Empty Stack!!!");
            else
            printf("\n\nthe deleted item is %d:\t",s->items[s->top--]);
        }
