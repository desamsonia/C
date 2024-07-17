/*Write a program to replace all 0's with 1 in a given integer. Must use functions
example:
input                                                                                    output
1010                                                                                   1111
0                                                                                         1
-101                                                                                    -111
99999                                                                                 no zeros in input
01204                                                                                 1214 */

#include<stdio.h>
#include<stdlib.h>
void replace(int);
int main()
{
    int num;
    scanf("%d",&num);
    replace(num);
}
void replace(int n)
{
    int cnt=0,res=0,p=1,temp,rem=0;
    if(n==0)
    {
        printf("1");
        exit(0);
    }
    else
    {
        if(n<0)
        {
            temp=-1*n;
            p=-1;
        }
        else
        temp=n;
    while(temp)
    {
        if((temp%10)==0)
        {
            temp=temp+1;
            cnt++;
        }
        rem=rem*10+temp%10;
        temp/=10;
    }
    if(cnt==0)
    {
        printf("no zeros in input");
        exit(0);
    }
    }
    while(rem)
    {
        res=res*10+rem%10;
        rem=rem/10;
    }
    printf("%d\n",p*res);
}
