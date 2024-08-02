#include<stdio.h>
#include<string.h>
int main()
{
char s1[30],s2[20],tmp[10];
int pos;
puts("Enter string:");
gets(s1);
puts("Enter string:");
gets(s2);
INPUT:     printf("Enter pos to insert string:");
scanf("%d",&pos);
if((pos<0) || pos>strlen(s1))
{
printf("Error,Invalid positon\n");
printf("use 0....%d\n",strlen(s1));
goto INPUT;
}
printf("%s\n",s1+pos);
strcpy(tmp,s1+pos);
strcpy(s1+pos,s2);
strcpy(s1+strlen(s1),tmp);
printf("%s %s\n",s1,s2);
return 0;
}
