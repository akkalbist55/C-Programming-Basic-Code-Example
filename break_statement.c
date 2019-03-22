//Write an C program using Break Statement
/*
The break statement is used mainly in in the switch statement. It is also useful for immediately stopping a loop.

We consider the following program which introduces a break to exit a while loop:

*/

#include <stdio.h>
int main()
/*
        {
            int num = 5;
            while (num > 0) {
            if (num == 3)
            break;
            printf("%d\n", num);
            num--;
            }
        }
        */
{
    int num = 10;
    while (num > 0) {
    if (num == 5)
    break;
    printf("%d\n", num);
    num--;
    }
}
