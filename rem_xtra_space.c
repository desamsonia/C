#include<stdio.h>
#include<string.h>
char *removeSpaceAtStart(char *ptr)
{
        while(*ptr == 32)
        {
            memmove(ptr,ptr+1,strlen(ptr+1)+1);
        }
}
char *removeSpaceAtmid(char *ptr)
{
    while(*ptr)
    {
        if(*ptr == 32)
        {
            if(*(ptr+1) == 32)
            {
                memmove(ptr,ptr+1,strlen(ptr+1)+1);
                ptr--;
            }
        }
        ptr++;
    }
}
char *removeSpaceAtLast(char *ptr)
{
    while(ptr[strlen(ptr)-1] == 32 )
      ptr[strlen(ptr)-1] = '\0';
}
int main()
{
    char str[100],*p;
    fgets(str,100,stdin);
    int len=strlen(str),cnt=0,i;
    for(i=0;str[i];i++)
    {
     if(str[i]==32)
       cnt++;
    }
    if(len==cnt)
    {
    printf("empty string");
    }
    removeSpaceAtStart(str);
    removeSpaceAtLast(str);
    removeSpaceAtmid(str);
    printf("%s",str);
}
