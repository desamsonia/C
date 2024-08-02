/*print prime numbers in a given range in which last digit is 7 */
#include<stdio.h>
#include<math.h>
int main()
{
int min,max,data,d;
printf("Enter min and max:");
scanf("%d %d",&min,&max);
printf("Enter last digit:");
scanf("%d",&d);
int i,s;
for(data=min;data<=max;data++)
{
  s=sqrt(data);
  printf(" s=%d",s);
  for(i=2;i<=s;i++)
  {
   if(data%i==0)
   {
      break;
      }
      }
if(i>s)
 {
 if(data%10 == d)
  printf(" %d",data);
  fflush(stdout);
 }
  }
  return 0;
  }    
