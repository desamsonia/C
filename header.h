#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 5
int cnt;

typedef struct product
{
    char name[20];
    float cost;
    int quantity;

}PRODUCT;

int cnt;
void addToCart(PRODUCT *);
void viewCart(PRODUCT *);
void delProduct(PRODUCT *);
void sortCart(PRODUCT *);