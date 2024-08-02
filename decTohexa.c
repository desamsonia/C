// C Program to demonstrate Decimal to Hexadecimal 
#include <stdio.h>
#include<string.h>
int main() 
{ 
	int num,t,i;
    char hex[40];
    printf("Enter decimal number:");    //int ch = num / 16; ch = 2
                                       // int r = ch * 16;   r = 2*16 = 32
                                       // temp = num - r;  45 - 32 = 13
    scanf("%d",&num); 
    while(num != 0)
    {
        t = num % 16;
        if(t<10)
        {
            t = t + 48;
            printf("if_%d\n",t);
        }
        else
        {
            printf("else_%d\n",t);
            t = t + 55;
              printf("else_%d\n",t);
        }
        hex[i++] = t;
        num = num/16;
    }
    int n = strlen(hex);
    for(i=n;i>0;i--)
    printf("%c",hex[i]);
	return 0; 
}
