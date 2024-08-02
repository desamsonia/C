#include<stdio.h>
#include<math.h>
#include<string.h>
int binToInt(char *str)
{
int dec=0,base=0,i,a;
int l=strlen(str)-1;
for(i=l; i>=0 ; i--)
{
  if(str[i] == '0' || str[i] == '1')
  {
  a=str[i] - 48;
  dec += a*pow(2,base);
  base++;
   }
  else
  {
  printf("else_fun %c\n",str[i]);
  printf("else_fun %d\n",str[i]);
  return 0;
  }
 }
return dec;
}
  
int main()
{
char str[20];
scanf("%s",str);
int d;
d=binToInt(str);
if(d)
printf("%d\n",d);
else
printf("invalid input");
return 0;
}
