#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[10],*p;
    int i;
    scanf("%[^\n]s",s1);
    scanf("%s",s2);
    p=s1;
    p=strstr(s1,s2);
    if(!p)
    {
        printf("sub string not found\n");
        return 0;
    }
    while(p=strstr(s1,s2))
    {
        for(i=0;s2[i];i++)
        {
            if(s2[i] >= 'a' && s2[i] <= 'z')
            {
                p[i] = s2[i] - 32;
            }
            if(s2[i] >= 'A' && s2[i] <= 'Z')
            {
                p[i] = s2[i] + 32;
            }
        }
    }
    printf("%s\n",s1);
    return 0;
}
