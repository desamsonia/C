#include "header.h"
extern int cnt;
void delete(DATABASE *p)
{
    if(cnt==0) printf("your database list is empty!!");
    else
    {
    char DB[20];
    int i;
    printf("Enter name to delete:");
    scanf("%s",DB);
    for(i=0;i<cnt;i++)
    {
       if(strcmp(DB,p[i].name)==0)
       {
         memmove(p+i,p+i+1,(cnt-i-1)*sizeof(DATABASE));
         cnt--;
       }
    }
    }
}