#include<stdio.h>
#define SWAPBYTE(n)  n=(((n>>8) & 0x00FF) | ((n<<8) & 0xFF00))
int main()
{
    unsigned short int n;
    scanf("%hx",&n);
    SWAPBYTE(n);
    printf("%hx",n);
    return 0;
}
