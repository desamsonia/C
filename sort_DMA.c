#include "header_DMA.h"

PRODUCT *sortCart(PRODUCT *p)
{
    int i,j;
    char *str = 0;
    int q=0;
    float c=0;
    str = malloc(10);
    for(i=0;i<cnt;i++)
    {
        for(j=i+1;j<cnt;j++)
        {
            if(strcmp(p[i].name,p[j].name) > 0)
            {
              strcpy(str,p[i].name);
              strcpy(p[i].name,p[j].name);
              strcpy(p[j].name,str);
              c=p[i].cost;
              p[i].cost = p[j].cost;
              p[j].cost = c;
              q = p[i].quantity;
              p[i].quantity = p[j].quantity;
              p[j].quantity = q;
            }
        }
    }
    return p;
}