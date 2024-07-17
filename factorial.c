#include<stdio.h>
int main()
{
    int data,f=1,i;
    scanf("%d",&data);
    if(data<0)
       data = -data;
    for(i=1;i<=data;i++)
    {
        f=f*i;
       
    }
    printf("%d",f);
    return 0;
}
