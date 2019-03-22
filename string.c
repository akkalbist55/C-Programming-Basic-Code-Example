//Write an C program using String
/*
A string is nothing but a collection of characters in a linear sequence. 'C' always treats a string a single data even though it contains whitespaces. A single character is defined using single quote representation. A string is represented using double quote marks.
The classic string declaration can be done as follow:

 char string_name[string_length] = "string";
*/

#include <stdio.h>
#include <string.h>
int main () {
//string initialization
char string1[55]="Hello C Programmer";
char string2[25]=" Welcome!";
char string3[25];
int val;

//string comparison
val= strcmp(string1,string2);
if(val==0){
    printf("Strings are equal\n");
}
else{
    printf("Strings are not equal\n");
}

//string concatenation
printf("Concatenated string:%s",strcat(string1,string2)); //string1 contains hello world!

//string length
printf("\nLength of first string:%d",strlen(string1));
printf("\nLength of second string:%d",strlen(string2));

//string copy
printf("\nCopied string is:%s\n",strcpy(string3,string1));  //string1 is copied into string3
return 0;
}
