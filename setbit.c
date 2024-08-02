#include<stdio.h>
int main()
{
    int data = 14;
    int bitP,r;
    data = data | (1<<5);
    int i;
    int bit = 8*sizeof(int)-1;
    while(bit >= 0)
    {
       r = ((data>> bit)&1);
       
        printf("%d ",r);
        if(bit%8 == 0) printf(" ");
        -- bit; 
    }
    printf("\n");
    
}