/* Program to ask two numbers and display message “Either number is negative”, if one of
the numbers is negative; otherwise display message “Both numbers are positive” */

/*

The goto statement is used to alter the normal sequence of program execution by unconditionally transferring control to some other part of the program.
The goto statement transfers the control to a labeled statement somewhere in the current function using
syntax:
goto label;
Here, label is an identifier used to label the target statement to which the control would be transferred.
The target statement must be labeled using syntax:
label: statements;
*/
#include<stdio.h>
void main()
{
int i, num1, num2;
printf("Enter first no:");
scanf("%d", &num1);
if(num1<0)
{
goto negative;
}
printf("\n Enter second number:");
scanf("%d", &num2);
if(num2<0)
{
goto negative;
}
printf("\n Both numbers are positive");
return;
negative: printf("\n Either number is negative");
}
