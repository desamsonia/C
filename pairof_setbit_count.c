/* Write a program to print pair of set bit count in a given integer
example:
input                output
-1                     16
-3                     15
-5234                11
65                       0
0                          0
85363                  3   */

#include<stdio.h>
int main()
{
    int data;
    int bit=31,cnt=0,p=0;
    scanf("%d",&data);
    while(bit>0)
    {
        if(((data>>bit)&1)&&((data>>bit-1)&1))
        {
              cnt++;
              --bit;
        }
    bit--;
    }
    printf("%d",cnt);
    return 0;
}
