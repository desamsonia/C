#include<stdio.h>
int main()
{
    int data = -1;
    int bitP,r;
   // data = data | (1<<5);
    int i,cnt=0;
    int bit = 8*sizeof(int)-1;
    while(bit >= 0)
    {
       r = ((data>> bit)&1);
       if(r && ((data>> (bit-1))&1) )
       cnt++;
        printf("%d ",r);
        if(bit%8 == 0) printf(" ");
        --bit;
        --bit; 
    }
    printf("\n");
    printf(" count = %d\n",cnt);
    
}