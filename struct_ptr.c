#include <stdio.h>
int main()
{
    struct site
    {
        char name[34];
        int no_of_pages;
    };
    struct site *ptr;
    struct site var;
    ptr=&var;
    printf("%d",ptr->no_of_pages);
    printf("%s",ptr->name); 
    getchar();
    return 0;
}
