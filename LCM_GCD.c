/*Write a program to find out the GCD and LCM of two integers.
Example-:
Input:
12
34
Output:
GCD: 2
LCM: 204 */
#include<stdio.h>
int main()
{
    int n1,n2,gcd,i,max;
    scanf("%d%d",&n1,&n2);
    int t1,t2;
    t1=n1,t2=n2;
    for(i=1;i<=t1 || i<=t2;++i)
    {
        if(t1%i==0 && t2%i==0)
               gcd=i;
    }
    printf("GCD: %d\n",gcd);
    
   max = (n1>n2) ? n1:n2;
   while(1)
   {
       if(max%n1==0 && max%n2==0)
       {
           printf("LCM: %d",max);
           break;
       }
       ++max;
   }
    
    
}
