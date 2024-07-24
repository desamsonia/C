#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int my_Atof(char *s,float *f)
{
    int c=0;
    float k=0;
    if(s[0] == '-') *f = -*f;
    if(*s == '-' || *s == '+') s++;
    for(;*s;s++)
    {
       if(*s == '.') break;
        *f=*f*10+(*s-48);
    }
    for(s++;*s;s++)
    {
        k=k*10+(*s-48);
        c++;
    }
    k = k*1000000;
    *f = *f + k/pow(10,c+6);
    return 1;
}
int check_Digit(char *s)
{
    int c = 0,s1=0;
    if(*s == '.') return 1;
    if(*s == '+' || *s == '-') s++;
    if(s[strlen(s)-1] == '.') return 1;
    for(;*s;s++)
    {
        if(*s=='.')
        {
            s++;
            c++;
        }
        if(!isdigit(*s)) return 1;
    }    
    if(c==0)  return 1;
    return 0;
}
int main()
{
    char str[50];
    float f = 0.0;
    scanf("%[^\n]s",str);
    if(check_Digit(str) ) printf("ERROR");
    else if(my_Atof(str,&f)) printf("%.3f",f);
}
