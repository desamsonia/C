/* detect wther system big endian or little endian */
#include<stdio.h>
int main()
{
    unsigned int x = 0x3210;
    char *p = (char*) &x;
    printf("*p = %x\n",*p);
    if(*p == 0x10) printf("little ");  // 10 32 -> last byte is stored first
    else printf("Big"); // 32 10
    return 0;
}