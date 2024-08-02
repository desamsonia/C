
/* nibble swaaping based on given positions by user
   i/p: 0x3412 , pos1 = 0 and pos2 = 3
   o/p: 0x2413 */
#include <stdio.h>
int swapNibbles(int x, int p1, int p2)
{
    if (p1 < 0 || p1 > 3 || p2 < 0 || p2> 3) printf(" Invalid \n");    
     int n1,n2;
     n1 = (x >> (p1 * 8)) & 0xFF; // get nibbles at given position
     n2 = (x >> (p2 * 8)) & 0xFF; // get bibbles at given position
     x &= ~(0xFF << (p1 * 8));// clearing position 1, 3410
     //printf("x = %x\n",x);
     x &= ~(0xFF << (p2 * 8)); // clearing postion 2, 3400
    // printf("x = %x\n",x);
     x |= (n2 << (p1 * 8)); // setting positon 1 with n2 value, 3401
     //printf("x = %x\n",x); 
     x |= (n1 << (p2 * 8)); // setting position 2 with n1 value, 3421
    // printf("x = %x\n",x);
     return x;
}
int main()
 {
     int x = 0x12345678; 
     printf("x = %d\n",x);
     int p1,p2;
     printf("Enter positions:");
     scanf("%d%d",&p1,&p2);
     x = swapNibbles(x,p1,p2);
     printf("Swapped Byte:  %X\n", x);
    return 0;
}