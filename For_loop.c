//Write a c program using for loop
#include<stdio.h>

/*
A for loop is a more efficient loop structure in 'C' programming. The general structure of for loop is as follows:

for (initial value; condition; incrementation or decrementation )
{
  statements;
}

*/
int main()
{
	int number;
	for(number=1;number<=10;number++)	//for loop to print 1-10 numbers
	{
		printf("%d\n",number);		//to print the number
	}
	return 0;
}
