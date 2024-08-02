#include<stdio.h>
int main()
{
    int word;
    int f1=0,f2=1,f3=2,f4=3;
    word = ((2 &~  (3 << (17-16)*2)) | (f2 << (17-16)*2)); // PINNO
    printf("%x\n",word);
    int bit = 8*sizeof(int)-1;
    while(bit>=0)
    {
        printf("%d",(word >> bit) & 1);
        if(bit%8==0)
        printf(" ");
        bit--;
    }
    printf("\n");
    printf("%x\n",word);
    printf("%d\n",word);
}