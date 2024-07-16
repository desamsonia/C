// Method 1 
//delete the word in given string,if letters are repeated in word.
i/p1: India is my country
o/p1: is my country
i/p2: Sonia desam reddy chennai hyderabad
o/p2: Sonia desam

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void word(char *);

int rep_char(char str[], int i,int j)
{
    int k;
    for(i=i;i<j;i++)
    {
	    for(k=i+1;k<j;k++)
	    {
		    if(str[i] == str[k])
		    { 
			    return 1;
		    }
	    }
    }
    return 0;
}

char *get_substr(char *str,int i,int j)
{
	int k = 0;
	char *sub = malloc(40);
	for(i=i;i<=j;i++)
		sub[k++] = str[i];
	printf("sub:%s\n",sub);
	return sub;
}

void remsubstr(char *str,char *sub)
{
	char *pos;
	pos=strstr(str,sub);
        memmove(pos, pos+strlen(sub)+1,1+strlen(pos+strlen(sub)));
	word(str);
}

void word(char str[])
{
  int i,j,len;
  len=strlen(str)-1;
  for(i=j=0;j<len;j++)
   {
   if(str[j] == ' ')
         continue;
    i=j;
    while(str[j] != ' ' && j<=len)
           j++;
    j--;  
   int n = rep_char(str,i,j);
   int cnt = 1;
   if(n)
   {
       char *sub;
       sub = get_substr(str,i,j);
       printf("i:%d and j:%d\n",i,j); 
       remsubstr(str,sub);
       if(cnt == 1)
	       break;
   }
   printf("%s\n",str);
}
}

int main()
{
 char str[50];
 printf("Enter string:");
 scanf("%[^\n]s",str);
 word(str);
}
