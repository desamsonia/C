#include "header.h"
extern int cnt;
void view(DATABASE *p)
{
    int i;
    printf("Name\tPhone\tEmailID\n");
    for(i=0;i<cnt;i++)
    {
        printf("%s\t%s\t%s\n",p[i].name,p[i].phone,p[i].email);
    }
}