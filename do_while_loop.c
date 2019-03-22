//do while loop in C Programming Language

/*
A do-while loop is similar to the while loop except that the condition is always executed after the body of a loop. It is also called an exit-controlled loop.

The basic format of while loop is as follows(Syntax):

 do {
  statements
} while (expression);

*/

#include <stdio.h>
int main()
{
    int num = 1;
    do
    {
        printf("%d\n", 5*num);
        num++;
    }while(num<=100);
    return 0;
}
