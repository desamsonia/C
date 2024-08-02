#include "header.h"
int main()
{
    DATABASE data[MAX];
    char ch;
    while(1)
    {
    printf("_____MENU____\n");
    printf("A.ADD\nV.VIEW\nD.DELETE\nS.SORT\n");
    printf("Enter choice:");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'A': add(data);
              break;
    case 'V': view(data);
              break;
    case 'D': delete(data);
              break;
    case 'S': sort(data);
              break; 
    case 'E': exit(0);   
    default: printf("INvalid\n");
            break; 
                                         
    }

    }
}