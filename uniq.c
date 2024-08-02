// print unique characters in agiven string 
#include<stdio.h>
#include<string.h>
void remove_chars(char *str)
{
for (int i = 0; i < strlen(str); i++)
{
int flag = 0;
for (int j = 0; j < strlen(str); j++)
{
 if (str[i] == str[j] && i != j) 
{
  flag = 1;
  break;
  }
}
if (flag == 0)
{
printf("%c",str[i]);
}
}
}
int main()
{
char str[20];
fgets(str,20,stdin);
remove_chars(str);
return 0;
}

