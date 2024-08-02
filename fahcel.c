/*  2. Write a program to Convert temperature from oC to oF or vice versa. Your program should show 
the output as given below.
 ./a.out
 1.for centigrade to farenhit
 2. for farenhit to centigrade
Enter your choice: 1
 Enter temperature in celcius: 37
 37o C = 98.6 oF */

#include<stdio.h>
int main()
{
  int temp;
  scanf("%d",&temp);
  int cel,fah;
  cel=temp;
  fah=temp;
  printf("1.For centigrade to farenhit\n");
  printf("2.For farenhit to centigrade\n");
  int ch;
  scanf("%d",&ch);
  switch(ch)
  {
     case 1: fah = (1.8*cel)+32 ;
             printf("%d oC = %d oF ",cel, fah);
             break;
     case 2: cel = (fah-32) * (0.5555);
             printf("%d oF = %d oC ",fah, cel);  
             break;     
   }  
   return 0;
   } 
