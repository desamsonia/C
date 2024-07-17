#include<stdio.h>
int non_repeate(int num,int rem)
{
    int temp,r1,cnt=0;
    temp=num;
    while(temp)
    {
        r1=temp%10;
        if(r1==rem)
           cnt++;
         temp/=10;  
    }
    if(cnt==1)
    return 1;
    else
    return 0;
}
int main()
{
    int data,r,temp,cnt=0;
    scanf("%d",&data);
    if(data==0)
    {
    printf("0");
    return 0;
    }
    temp=data;
    while(temp)
    {
        r=temp%10;
        if(non_repeate(data,r))
        {
            cnt++;
            printf("%d ",r);
        }
        temp/=10;    
    }
   if(cnt==0)
   printf("no non-repeated numbers");
   return 0;
}
