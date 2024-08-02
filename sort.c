#include "header.h"
extern int cnt;
void sort(DATABASE *p)
{
   int i,j;
    char *n = 0;
    char *ph = 0;
    char *e = 0;
    n = malloc(20);
    ph = malloc(10);
    e = malloc(30);
    for(i=0;i<cnt;i++)
    {
        for(j=i+1;j<cnt;j++)
        {
            if(strcmp(p[i].name,p[j].name) > 0)
            {
              strcpy(n,p[i].name);
              strcpy(p[i].name,p[j].name);
              strcpy(p[j].name,n);

              strcpy(ph,p[i].phone);
              strcpy(p[i].phone,p[j].phone);
              strcpy(p[j].phone,ph);

              strcpy(e,p[i].email);
              strcpy(p[i].email,p[j].email);
              strcpy(p[j].email,e);

            }
        }
    }


}