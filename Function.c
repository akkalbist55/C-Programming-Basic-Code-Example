//Write an C program using function
/*
A function in programming is a reusable block of code that makes a program easier to test, understand and can be modified easily without changing the calling program. Functions to divide the code and modularize the program for better and effective results. In short, a larger program is divided into various subprograms which are called as functions.
*/
#include <stdio.h>
int add(int a, int b);	//function declaration
int main()
{
	int a=100,b=200;
	int c=add(100,200); 	//function call
	printf("Addition:%d\n",c);
}
int add(int a,int b)	//function body
{
	int c;
	c=a+b;
	return c;
}
