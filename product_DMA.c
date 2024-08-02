/* Array of structures PRODUCT */
/* Files: 1. add_DMA.c
          2. view_DMA.c
          3. sort_DMA.c
          4. delProduct.c */
/* Compile above all files at a time and generte single exe file */ 

#include "header_DMA.h"
int main()
{
   PRODUCT *cart=0;
   while(1)
   {
   printf("_____MENU____");
   printf("\nA.Add To Cart\nV.View To Car\nD.Delete From Cart\nQ.Quit\nS.Sort Cart\n");
   char ch;
   printf("Enter choice:");
   scanf("%c",&ch);
   switch (ch)
   {
   case 'A': cart = addToCart(cart);
             break;
   case 'V': viewToCart(cart);
             break;
   case 'D': cart = delProduct(cart);
             break;   
   case 'S': cart = sortCart(cart);   
             break;                      
   case 'Q': exit(0);         
   }
   }
  
}