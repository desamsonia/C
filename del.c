#include "header.h"
extern int cnt;

void delProduct(PRODUCT *p)
{
    char prod[10];
    printf("Enter prod name to delete:");
    scanf("%s",&prod);
    if(cnt==0)
    {
      printf("Your cart is empty !!\n");
    }
    int i;
    for(i=0;i<cnt;i++)
    {
        if(strcmp(p[i].name,prod)==0)
        {
            memmove(p+i,p+i+1,(cnt-i-1)*sizeof(PRODUCT));
            cnt--;
        }

    }
    
}