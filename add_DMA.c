#include "header_DMA.h"
#include <stdlib.h>
#include<stdio.h>
extern int cnt;
PRODUCT *addToCart(PRODUCT *p)
{
   p = realloc(p,(cnt+1)*sizeof(PRODUCT));
   printf("Enter name of the product:");
   scanf("%s",p[cnt].name);
   printf("Enter cost of the product:");
   scanf("%f",&p[cnt].cost);
   printf("Enter quantity of the product:");
   scanf("%d",&p[cnt].quantity);
   cnt++;
   return p;
}