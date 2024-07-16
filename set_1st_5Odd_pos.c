/* Write a c program to set the first 5 odd-numbered bit positions in a given integer without affecting other bits.
note: use bit-wise operators.
Ex:
input     output
-2           -2
65535     65535
0             682  */

#include<stdio.h>
int main()
{
    int data,i;
    scanf("%d",&data);
    for(i=1;i<=10;i=i+2)
    {
        data = data | (1<<i);
    }
    printf("%d",data);
}
