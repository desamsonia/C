#include<stdio.h>
int main()
{
    int num,rem,cnt=0;
    scanf("%d",&num);
    if(num)
    {
    while(num)
    {
        rem=num%10;
        if(rem<0) rem=-rem;
        else      rem=rem;
        if(rem%2==1)
        {
        printf(" %d",rem);
        cnt++;
        }
        
        num/=10;
    }
    if(cnt==0)
    {
        printf("no odd digits");
    }
    }
    else
    {
        printf("you have supplied zero");
    }
    return 0;
}
