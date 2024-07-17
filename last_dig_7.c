 /* write a program to print prime numbers in a given range in which last digit is 7
Example 1:
Input-1: 1      Input-2: 50           Output: 7 17 37 47 */

#include<stdio.h>
#include<math.h>
int primeCheck(int);
int digCheck(int);
int main()
{
    int min,max,data,cnt=0;
    scanf("%d%d",&min,&max);
    for(data=min;data<=max;data++)
    {
        if(primeCheck(data))
        {
            if(digCheck(data))
            {
                cnt++;
            printf(" %d",data);
            }
        }
    }
    
    if(cnt==0)
    printf("there is no prime number last digit is 7");
    return 0;
}
int primeCheck(int data)
{
    int s=sqrt(data);
    int i;
    for(i=2;i<=s;i++)
    {
        if(data%i==0)
            break;
    }
    if(i>s)
       return 1;
    else
       return 0;
}
int digCheck(int data)
{
    int r;
    r=data%10;
    if(r==7)
      return 1;
   else
    return 0;
}
