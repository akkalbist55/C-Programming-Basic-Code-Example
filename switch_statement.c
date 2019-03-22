// Write a C program using What is a Switch Statement
/*
A switch statement tests the value of a variable and compares it with multiple cases. Once the case match is found, a block of statements associated with that particular case is executed.

Each case in a block of a switch has a different name/number which is referred to as an identifier. The value provided by the user is compared with all the cases inside the switch block until the match is found.

Syntax
A general syntax of how switch-case is implemented in a 'C' program is as follows:

switch( expression )
{
	case value-1:
			Block-1;
			Break;
	case value-2:
			Block-2;
			Break;
	case value-n:
			Block-n;
			Break;
	default:
			Block-1;
			Break;
}
Statement-x;

*/
#include <stdio.h>
int main()
{
    int num = 8;
    switch (num) {
    case 7:
    printf("value is 7");
    break;
    case 8:
    printf("value is 8");
    break;
    case 9:
    printf("value is 9");
    break;
    default:
    printf("out of the range");
    break;
    }
    return 0;
}
