/* to insert string at the specied position in another string */
#include<stdio.h>
#include<string.h>
int main()
{
char s1[30],s2[30],tm[30];
int pos;
printf("Enter string:");
scanf("%s",s1);
printf("Enter string to insert:");
scanf("%s",s2);
printf("Enter pos to insert string:");
scanf("%d",&pos);
strcpy(tm,s1+pos);
printf("%s\n",tm);
strcpy(s1+pos,s2);
printf("%s\n",s1);
strcpy(s1+strlen(s1),tm);
printf("%s",s1);
return 0;
}
