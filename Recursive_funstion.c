//Write an C Program using Recursive Functions
/*
Consider the factorial of a number which is calculated as follow 6! =6* 5 * 4 * 3 * 2 * 1.

This calculation is done as repeatedly calculating fact * (fact -1) until fact equals 1.

A recursive function is a function which calls itself and includes an exit condition in order to finish the recursive calls. In the case of the factorial number calculation, the exit condition is fact equals to 1. Recursion works by "stacking" calls until the exiting condition is true.

For example:
*/
#include<stdio.h>
int factorial(int number);
int main(){
    int x =6;
    printf("The factorial of %d is %d\n", x, factorial(x));
    return 0;
    }
int factorial(int number) {
    if (number == 1) return (1);
    else
    return (number * factorial(number - 1));

}
/*
#include <stdio.h>
int factorial(int number);
int main() {
  int x = 6;
  printf("The factorial of %d is %d\n", x, factorial(x));
  return 0;}
int factorial(int number) {
 if (number == 1)    return (1); // exiting condition
  else
    return (number * factorial(number - 1));
}
*/
