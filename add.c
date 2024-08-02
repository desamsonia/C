#include "header.h"
extern int cnt;

void addToCart(PRODUCT *p)
{
   int i;
   printf("Enter product name:");
   scanf("%s",p[cnt].name);
   printf("Enter pages:");
   scanf("%d",&p[cnt].quantity);
   printf("Enter cost of the product:");
   scanf("%f",&p[cnt].cost);
   cnt++;
}