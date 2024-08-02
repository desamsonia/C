/* Implement simple calculator
   i/p1:  "30+70"
   o/p1:   100
   i/p2:  "30*2"
   o/p2:   60
*/   
#include<stdio.h>
int main()
{
char str[20],ch;
INPUT: printf("Enter string:");
       scanf("%s",str);
       int i,n=0,a,b,c;
for(i=0;str[i];i++)
{
   if(str[i] >= 48 && str[i] <= 57)
   {  
   str[i] = str[i] - 48;
   n=n*10+str[i];
   }
   else if(str[i] == '-')
   
   else if(str[i] == '+' || str[i] == '*' || str[i] == '-' || str[i] == '/')
   {
   a=n;
   n=0;
   ch=str[i];
   //continue;
    } 
   else
   {
   printf("Error!!,Enter the input again\n");
   goto INPUT;
   }   
}
b=n;
//printf("%d\n",a);
//printf("%d\n",b);
//printf("%c\n",ch);
switch(ch)
{
  case '+': c=a+b;
            printf("%d\n",c);
            break;
  case '-': c=a-b;
            printf("%d\n",c);
            break;
  case '*': c=a*b;
            printf("%d\n",c);
            break;
  case '/': c=a/b;
            printf("%d\n",c); 
            break;                             
}
return 0;
}    
    
    
   
