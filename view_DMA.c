#include "header_DMA.h"
#include<stdio.h>
extern int cnt;
void viewToCart(PRODUCT *p)
{
    int i;
    printf("Name\tCost\tQuantity\n");
    printf("-------------------------\n");
    for(i=0;i<cnt;i++)
    {
        printf("%s\t%f\t%d\n",p[i].name,p[i].cost,p[i].quantity);
    }
}