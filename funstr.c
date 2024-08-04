// very interesting question



#include <stdio.h>
#include <string.h>
int main()
{
    char *s;
    char *fun();
    s = fun();
    printf("%s", s); // if we mention '\n' after %s then gives seg fault,remove then gives (null)
    return 0;
}
char *fun()
{
    char buffer[30];
    strcpy(buffer, "RAM");
    return (buffer);
}
