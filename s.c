/* i/p:   I have many books 
   o/p:   i evah ynam skoob
   */
#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
int i=0,j=strlen(str)-1;
char t;
while(i<j)
{
t=str[i];
str[i] = str[j];
str[j]=t;
i++;
j--;
}
}
void reverse_words(char *str)
{
char *p;
char t[100];
int i=0;
p=strtok(str," ");
while(p)
{
reverse(p);
strcpy(t+i,p);
i=i+strlen(p);
t[i] = ' ';
i++;
p=strtok(NULL, " ");
}
t[i-1] = '\0';
strcpy(str,t);
}
int main()
{
char str[100];
gets(str);
reverse_words(str);
printf("%s\n",str);
return 0;
}
