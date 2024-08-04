#include <stdio.h> 
#include <stdlib.h>
int main()
{
    int *p;
    p = (int *) malloc (20); /* Assume p has address of 1314 */
    printf("1_%lu\n",p);
    printf("2_%lu\n",p);
    free(p);
    printf("3_%lu\n", p);
    return 0;
}
