#include <stdio.h>
int main()
{
    struct bits
    {
        int i:40;
    }bit;

    printf("%d\n", sizeof(bit));
    return 0;
}
