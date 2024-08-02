/*  i/p: aaaaaaaaaaa  -> a11
    o/p: ba */                    
#include<stdio.h>
#include<string.h>
char *convertToHex(int num)
{
  int t,i=0;
  char *hex;
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
    return hex;
}
int main()
{
    char str[10],tm[10],ch,*hex;
    printf("Enter string:");
    scanf("%s",str);
    int len = strlen(str);
    int i,cnt=0,t,j;
    for(i=0;i<len;i++)
    {
      ch = str[i];
      while(i<len && str[i] == ch)
      {
        cnt++;
        i++;
      }
      i--;
      hex = convertToHex(cnt);
      printf("%s\n",hex);
    }
  
   
}