#include <stdio.h>
int main()
{
    FILE *fptr = NULL;
    char ch ={0};
    fptr =fopen("Raji.txt","w+");
    if(fptr == NULL)
    {
        printf("Error !!");
        //exit(1);
    }
    fseek(fptr,6,SEEK_SET);
    fputs("hi",fptr);
   /* ch = fgetc(fptr);
    printf("%c",ch);
    fseek(fptr,6,SEEK_CUR);
    ch = fgetc(fptr);
    printf("\n%c",ch);
    fseek(fptr,-3,SEEK_END);
    ch = fgetc(fptr);
    printf("\n%c",ch);*/
    fclose(fptr);

}