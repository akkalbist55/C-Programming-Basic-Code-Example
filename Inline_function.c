//Write an C Program using Inline Functions addition
/*
Functions are used to store the most frequently used instructions. It is used for modularizing the program.

Whenever a function is called, the instruction pointer jumps to the function definition. After executing a function, instruction pointer falls back to the statement from where it jumped to the function definition.

Whenever we use functions, we require an extra pointer head to jump to the function definition and return to the statement. To eliminate the need of such pointer heads, we use inline functions.

In an inline function, a function call is directly replaced by an actual program code. It does not jump to any block because all the operations are performed inside the inline function.

Inline functions are mostly used for small computations. They are not suitable when large computing is involved.

An inline function is similar to the normal function except that keyword inline is place before the function name.

Inline functions are created with the following syntax:
inline function_name ()
{
    //function definition
}
Let us write a program to implement an inline function.
*/


#include<stdio.h>
inline int add(int a, int b)		//inline function declaration
{
	return(a+b);
}
int main()
{
	int c=add(10,20);
	printf("Addition:%d\n",c);
}

