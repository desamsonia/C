/* Distance between given two characters
  i/p: sonia , s, i
  o/p: 3 */
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10],s,e;
    printf("Enter string:");
   // scanf("%s",str);
   gets(str);
    printf("Enter character1:");
    scanf(" %c",&s);
   
    printf("Enter character2:");
    scanf(" %c",&e);
    int i,k,cnt=0;
    for(i=0;str[i];i++)
    {
        if(str[i] == s)
        break;
    }
    for(k=i;str[k];k++)
    {
       cnt++;
       if(str[k] == e)
           break;
    }
    printf("%d\n",cnt-1);  
}


