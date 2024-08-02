#include "header_DMA.h"
extern int cnt;

PRODUCT *delProduct(PRODUCT *p)
{
    if(cnt==0)
    {
        printf("Your cart is Empty!!\n :(\n");
    } 
    char *prod = 0;
    printf("Enter name to delete product from cart:");
    prod=malloc(10);
    scanf("%s",prod);
    int i;
    for(i=0;i<cnt;i++)
    {
        if(strcmp(prod,p[i].name)==0)
        {
            memmove(p+i,p+i+1,(cnt-i-1)*sizeof(PRODUCT));
            cnt--;
            p=realloc(p,cnt*sizeof(PRODUCT));
            return p;
        }
    }
    printf("%s product is not found in the cart\n",prod);
    return p;
}

