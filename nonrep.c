#include<stdio.h>
#include<string.h>
int main()
{
char str[10];
fgets(str,10,stdin);
int i,j;
printf("%s",str);
for(i=0;i<strlen(str);i++)
{
for(j=i+1;j<strlen(str);j++)
{
  if(str[i] != str[j] )
  {
    memmove(str+0,str+j,strlen(str+j+1)+1);
    //j--;
    }
    }
    }
    printf("%s",str);
    return 0;
    }
