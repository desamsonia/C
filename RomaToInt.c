#include<stdio.h>
/* Roman to decimal*/
#include<string.h>
int values(char s)
{
    if(s=='I') return 1;
    if(s=='V') return 5;
    if(s=='X') return 10;
    if(s=='L') return 50;
    if(s=='C') return 100;
    if(s=='D') return 500;
    if(s=='M') return 1000;
    return -1;
}
int main()
{
    char str[20];  int i,s1,s2,res=0;
    printf("Enter string:");
    scanf("%s",str);
    for(i=0;i<strlen(str);i++)
    {
        s1 = values(str[i]);
        if(i+1 < strlen(str))
        {
            s2 = values(str[i+1]);
            if(s1 >= s2)
            {
                res = res +s1;
            }
            else
            {
                res = res + s2 -s1;
                i++;
            }
        }
        else
        {
            res = res + s1;
        }

    }
    printf("res = %d\n",res);

}