/* Write a program to print the type(category) of user supplied char from stdin. The categories are 
Numeric/Uppercase/lowercase/spl char */

#include<stdio.h>
int main()
{
 char ch;
 scanf("%c",&ch);
 ((ch>=48) && (ch<=57)) ? printf("Numeric character\n") : ((ch>=65) && (ch<=90)) ? printf("Uppercase charcter\n") : ((ch>=97) && (ch<=122)) ? printf("lower case character\n") : printf("special character\n");
 return 0;
 }
  
