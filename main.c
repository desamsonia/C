#include "header.h"

int main()
{
    PRODUCT arr[MAX];
    char choice;
    while(1)
    {    
        printf("___MENU___\n");
        printf("A.addToCart V.viewCart  D.delFromCart  e.exit\n");
        scanf("%c",&choice);
        switch(choice)
        {
            case 'A' : addToCart(arr);
                      break;
            case 'D' : delProduct(arr);
                      break;
            case 'V' : viewCart(arr);
                      break;
            case 'S' : sortCart(arr);
                      break;          
            case 'E' : exit(0);        
        }
    }
}
