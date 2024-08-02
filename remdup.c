/* i/p = embedded
   o/p = embd */
#include<stdio.h>
#include<string.h>
int main()
{
char str[30];
fgets(str,30,stdin);
int i,j;
for(i=0;i<strlen(str);i++)
{
for(j=i+1;j<strlen(str);j++)
{
  if(str[i] == str[j] )
  {
    memmove(str+j,str+j+1,strlen(str+j+1)+1);
    j--;
    }
    }
    }
    printf("%s\n",str);
    return 0;
    }

