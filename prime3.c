/*print prime numbers in a given range in which last digit is 7 */
#include<stdio.h>
#include<math.h>
int main()
{
int data,min,max,s,i,cnt=0;
printf("Enter min and max:");
scanf("%d %d",&min,&max);
for(data=min;data<=max;data++)
{
  s = sqrt(data);
  for(i=2;i<=s;i++)
  {
    if(data%i == 0)
    {
       break;
       }
   }
if(i>s)
{
int temp=data,rem;
rem=temp%10;
if(rem==7)
{
printf(" %d",data);
fflush(stdout);
 }
 }
 }
 return 0;
 }
     
     
