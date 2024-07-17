#include<stdio.h>
int main()
{
    int num,prod=1,rem=0;
    scanf("%d",&num);
    int temp;
    temp=num;
    if(num)
    {
    while(temp)
    {
        rem=temp%10;
        rem = (rem<0) ? -rem:rem;
        prod=prod*rem;
        temp/=10;
    }
    printf("%d",prod);
    }
    else
    {
        printf("0");
    }
}
