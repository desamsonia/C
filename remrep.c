#include<stdio.h>
#include<string.h>
int main()
{
char str[50];
fgets(str,50,stdin);
int i,j=0,k=0;
int l=strlen(str);
printf("%d\n",l);
for(i=0;i<l;i++)
{
  for(j=0;i<l;j++)
  {
  printf("%s",str);
    if(str[i] != str[j])
    {
      str[k++] = str[i];
      }
      }
      //str[j] = '\0';
      }
      //str[j] = '\0';
printf("%s",str);
return 0;
}  
