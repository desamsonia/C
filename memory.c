#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    p = (int *)malloc(42949672910);
    if(p == NULL)
        printf("Allocation failed");
    return 0;
}
