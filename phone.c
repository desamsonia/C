#include<stdio.h>
#include<string.h>
int phone(char *str)
{
int i;
for(i=0;str[i];i++)
{
if(str[i] >= 48 && str[i] <=57)
{
  if(str[3] == '-' && str[7] == '-')
  {
    return 1;
    }
  }
}
return 0;
}
int main()
{
char str[12];
fgets(str,12,stdin);
if(phone(str))
printf("True");
else
printf("False");
}
     
