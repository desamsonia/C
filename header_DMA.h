#include<stdlib.h>
#include<stdio.h>
#include<string.h>
typedef struct Product
{
    /* Members */
    char name[10];
    float cost;
    int quantity;

}PRODUCT;
int cnt;
PRODUCT *addToCart(PRODUCT *);
void viewToCart(PRODUCT *);
PRODUCT *delProduct(PRODUCT *);
PRODUCT *sortCart(PRODUCT *);

