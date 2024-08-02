/* to insert string at the specied position in another string */
#include<stdio.h>
#include<string.h>
int main()
{
char s1[30],s2[30],tm[30];
int pos;
printf("Enter string:");
scanf("%s",s1);
printf("Enter pos to insert string:");
scanf("%d",&pos);
int i;
i=pos;
//printf("%c",s1[pos]);
do {
     tm[i] = s1[i];
     //printf("%c\n",tm[i]);
  } while(s1[i++]); 
    
printf("%s\n",tm);  
/*for(i=pos;s1[i] != '\0';i++)
{
  tm[i] = s1[i];
  //printf("%c\n",tm[i]);
}*/
//tm[i]='\0';

return 0;
}
