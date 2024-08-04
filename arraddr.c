#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a[3];
    a = (int*) malloc ( sizeof (int) *3);
    free(a);
    return 0;
}
