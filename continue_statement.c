//Write a C program using Continue Statement
/*
When you want to skip to the next iteration but remain in the loop, you should use the continue statement.
*/
//For example:


#include <stdio.h>
int main() {
int number = 20;
while (number > 0) {
  number--;
  if (number == 8)
    continue;
 printf("%d\n", number);
}
}
