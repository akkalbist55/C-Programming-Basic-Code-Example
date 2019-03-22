//Write an C program using Static Variables
/*
The static variables have a local scope. However, they are not destroyed when exiting the function. Therefore, a static variable retains its value forever and can be accessed when the function is re-entered. A static variable is initialized when declared and needs the prefix static.

The following program uses a static variable:
*/
#include <stdio.h>
void say_hi();
int main() {
  int i;
  for (i = 0; i < 5; i++) { say_hi();}
   return 0;}
void say_hi() {
  static int calls_number = 1;
  printf("Hi Programmer Number %d\n", calls_number);
  calls_number ++; }
