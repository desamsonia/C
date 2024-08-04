#include <stdio.h>
int main()
{
    unsigned int a=0xffff;
    a = ~a;
    printf("%x\n", a);
    return 0;
}
