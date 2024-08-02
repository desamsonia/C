/* i/p1 : "1111"
   o/p1 :  15
   i/p2 : "10101"
   o/p2 : 21
*/   
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
int main() {
  char str[33];
  int i;
  int bin[33],dec=0,base=0;  
INPUT:  printf("Enter string:");
  scanf("%s",str);
  for(i=0;str[i];i++)
  {
    if(!(str[i] >= 48 && str[i] <= 49))
    {
       printf("Error !!, Enter the string with 0's and 1's\n");
       goto INPUT;
     }  
  }     
  for (i = strlen(str)-1; i>=0 ; i--) {
    bin[i] = str[i] - '0';
    dec += bin[i] * pow(2,base);
    base++;
  }
  printf("%d\n",dec);
  printf("%o\n",dec);
  printf("%x\n",dec);
 return 0;
}

