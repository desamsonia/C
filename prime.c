/* program to list the first N prime numbers from a s(starting number, lets say 10)

   starting from (10)   i/p1:10
                        i/p2:5 
                        o/p: 11 13 17 19 23       */  
                       

#include<stdio.h>
#include<math.h>
#include<limits.h>
int main()
{
int max=INT_MAX,min,s,data,cnt=0;
int i,n;
printf("Enter min vlaue:\n");
scanf("%d",&min);
scanf("%d",&n);
for(data=min;data<=max;data++)
{
s=sqrt(data);
 for(i=2;i<=s;i++)
 {
  if(data%2==0)
  {
  break;
  }
  }
  if(i>s)
  {
  cnt++;
  printf(" %d",data);
  if(cnt==n)
  {
  break;
  }
  }
  fflush(stdout);
  }
  }
  

