#include <stdio.h>
int main() {
    int  a[10] = {2, 1, 5, 4, 9, 3, 6, 7, 10, 8};
    char c[10] = {'A','B','C','D','E','F','G','H','I','J'};   
    int t[10],temp[10];
    int i;
    for(i=0;i<10;i++)
    {
        t[a[i]] = c[i];
    }
   /* for(i=1;i<11;i++)
    {
    printf("%c ",t[i]);
    }*/
    for(i=0;i<10;i++)
    {
        temp[c[i]] = a[i];
        //printf("%d ",temp[0]);
    }
    for(i=0;i<10;i++)
    {
    printf("%d ",temp[i]);
    }
    return 0;
}