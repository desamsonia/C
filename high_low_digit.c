#include<stdio.h>
int highest(int);
int lowest(int);
int main()
{
    int data,high,low;
    scanf("%d",&data);
    high=highest(data);
    printf("highest=%d\n",high);
    low=lowest(data);
    printf("lowest=%d\n",low);
    if(high==low)
    printf("all digits are same");
    return 0;
}
int highest(int data)
{
    int temp,r,h=0;
    temp=data;
    while(temp>0)
    {
        r=temp%10;
        if(r>h)
        {
         h=r;
        }
        temp/=10;
    }
    return h;
}
int lowest(int data)
{
    int temp,r,l=9;
    temp=data;
    while(temp>0)
    {
        r=temp%10;
       if(r<l)
         l=r;
temp/=10; 
}
return l;
}
