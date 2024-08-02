/* Struct initialization using return struct variable and collecting struct variable */
/* NOTE : We must use return to get modified values from input function ,if we use void then will get garbage values */
#include<stdio.h>
typedef struct student 
{
    int roll;
    char name[20];
    float marks;
}S1;

S1 input1(S1 var)
{
  printf("Enter roll:");
  scanf("%d",&var.roll);
  printf("Enter name:");
  scanf("%s",var.name);
  printf("Enter marks:");
  scanf("%f",&var.marks);  
  return var;
}

S1 print(S1 var)
{
    printf("roll = %d, name = %s, marks = %f\n",var.roll,var.name,var.marks);
}
int main()
{
    S1 v;
    v = input1(v);
    print(v);
}