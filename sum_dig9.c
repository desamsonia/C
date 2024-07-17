/*Write a program to print all numbers in the range ,  whose sum of digits is equal to 9 after reducing to single digit.
input                                               output
10   100                                    18 27  36  45  54 63  72  81  90  99 
-10 100                                     invalid range
1000 90                                   invalid range  */

#include<stdio.h>
int sumDig(int);
int main()
{
    int min,max,data,s,s1;
    scanf("%d%d",&min,&max);
    if(min>0 && min<=max)
    {
    for(data=min;data<=max;data++)
    {
        s=sumDig(data);
        s1=sumDig(s);
          if(s1==9)
        printf(" %d",data);
    }
    }
    else
    {
        printf("invalid range");
    }
 return 0;
}
int sumDig(int data)
{
    int t=data,sum=0,r;
    while(t>0)
    {
        r=t%10;
        sum=sum+r;
        t/=10;
    }
    return sum;
}
