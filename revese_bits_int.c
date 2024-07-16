/* Write a program to reverse all bits in a given integer data and then print its binary and integer value after reverse operation.
Note: Reverse bits operation should be performed on same variable.
Ex:
input                      output
65                         1 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0   -2113929216
-3223                    1 0 0 1 0 1 1 0 1 1 0 0 1 1 1 1 1 1 1 1 1 1 1 1  1 1 1 1 1 1 1 1   -1764753409
0                          0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 */

#include<stdio.h>
int main()
{
    int data;
    scanf("%d",&data);
    int bit=sizeof(int)*8-1;
    int left,right;
    for(left=bit,right=0;left>right;left--,right++)
    {
        if(((data>>left)&1) != ((data>>right)&1))
        {
            data = data^(1<<left);
            data = data^(1<<right);
        }
    }
   // printf("%d",data);
    while(bit>=0)
    {
        printf(" %d",(data>>bit)&1);
        --bit;
    }
    printf(" %d",data);
}
