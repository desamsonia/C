#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[20],*p;
    int i,j,len;
    scanf("%[^\n]s",s1);
    scanf("%s",s2);
    len = strlen(s2)-1;
    p=s1;
    p=strstr(s1,s2);
    if(!p)
    {
        printf("sub string not found");
        return 0;
    }
    p=s1;
    while(p=strstr(s1,s2))
    {
      for(i=0,j=len;s2[i];i++,j--)
      {
          p[j] = s2[i];
      }
      p++;
    }
    printf("%s",s1);
    return 0;
}
