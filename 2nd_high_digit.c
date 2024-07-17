#include<stdio.h>
int main()
{
    int num,rem,h1=0,h2=0,cnt=0,k=0;
    scanf("%d",&num);
    if(num<=9)
    printf("you have supplied single digit only");
    
    else if(num>9 || num<0)
    {
    while(num)
    {
        rem=num%10;
        rem = (rem<0) ? -rem : rem;
        k=rem;
        if(rem>h1)
        {
          h2=h1;
          h1=rem;
        }
        
        else if( (h2<rem) && ( rem < h1))
        {
            h2=rem;
        }
        cnt++;
        num/=10;
    }
     printf("%d",h2); 
      return 0;
       
    }
    else
    printf("all digits are same");
     
    return 0;
 
    
}
