/*Write a c program to clear the first 5 odd-numbered bit positions in a given integer without affecting other bits.
Note: use bit-wise operators
For example,
input               output
0                     0
65535              64853
56                    16
-10                   -684*/

#include<stdio.h>
int main()
{
    int data;
    scanf("%d",&data);
    int i;
    for(i=1;i<=10;i=i+2)
    {
        data = data & ~(1<<i);
        
    }
    printf("%d",data);
    return 0;
}
