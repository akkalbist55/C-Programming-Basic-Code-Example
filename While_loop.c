//While Loop in C Programming Language using gcc codeblock in linux
/*
A while loop is the most straightforward looping structure. The basic format of while loop is as follows:
Syntax:
while (condition) {
             statements;
}

*/
#include <stdio.h>
int main()
{
    int num;
    while(num<=10)
    {
        printf("%d\n", num);
        num++;
    }
    return 0;
}


