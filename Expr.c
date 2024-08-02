/*create a command line calculator like expr command */

#include <stdio.h>
int asciToInt(char *str)
{
 int i,n=0,a;
for(i=0;str[i];i++)
{
  str[i]=str[i] - 48;
  n=n*10+str[i];
  }
 return n;
 } 
 
int myExpr(int n1, char op, int n2)
 {
    int n3;
    switch (op) {
        case '+': return n3 = n1 + n2;
        case '-': return n3 = n1 - n2;
        case '*': return n3 = n1 * n2;
        case '/': return n3 = n1 / n2;
        case '%': return n3 = n1 % n2;   
        default: printf("Invalid operator: %c\n", op);
                 return 0;
    }
    
}

int main(int argc, char* argv[]) 
{
    int n1,n2,result;
    char op;
    if (argc != 4) {
        printf("Error !! \n");
        printf("Enter Format: <n1> <op> <n2>\n");
        return 0;
    }
     n1 = asciToInt(argv[1]);
     op = argv[2][0];
     n2 = asciToInt(argv[3]);
     result = myExpr(n1, op, n2);
     printf("Result: %d\n", result);
     return 0;
}
