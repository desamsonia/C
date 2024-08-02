#include<stdio.h>
#include<math.h>
int main()
{
  int min,max,data,s,i,sum=11;
  printf("Enter range:");
  scanf("%d %d",&min,&max);
  for(data=min;data<=max;data++)
  {
     s=sqrt(data);
     for(i=2;i<=s;i++)
     {
       if(data%i==0)
         break;
         }
     if(i>s)
     {
     int t=data,rev=0,rem;
     while(t>0)
     {
     rem=t%10;
     rev=rev+rem;
     t/=10;
    }
    if(rev==sum)
     {     
     printf(" %d",data);   
     }
     
       }
       }
       return 0; 
   }
