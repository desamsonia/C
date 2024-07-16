/* Write a program to print the count of longest series of one's in a given integer.
input                output
65534                 15
-1                         32
-3                         30
0                          no series of ones  */

#include<stdio.h>
int main()
{
    int data,bit,c=0,m=0;
    scanf("%d",&data);
    if(data==0)
    {
        printf("no series of ones");
    }
    else
    {
        while(data!=0)
        {
            data = data & (data<<1);
            c++;
        }
        printf("%d",c);
    }
  
         
   return 0; 
}
