#include <stdio.h>
#include<string.h>
int main () {
   FILE *fp;
   char str[20];
   fp = fopen("/home/vana/A/f.txt" , "r");
   if(fp == NULL) 
   {
      perror("Error !!");
   }
   if( fscanf ("%s", str)!=NULL ) 
   {
      puts(str);
   }
   int len = strlen(str);
   for(int i=0;str[i];i++)
   {
      printf("____for_%c\n",str[i]);
   }
   printf("%d",len);
   fclose(fp);
   
   return(0);
}
