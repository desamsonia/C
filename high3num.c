/* 3. Write a program to find the highest of three integers.
 Note: If two are equal and higher than the third or all the three variables are equal , 
appropriate result should print on screen. */
#include<stdio.h>
int main()
{
int n1,n2,n3;
scanf("%d%d%d",&n1,&n2,&n3);
((n1>n2) && (n1>n3)) ? printf("%d is a highest number\n",n1) : ((n2>n1) && (n2>n3)) ? printf("%d is a highest number\n",n2) : ((n3>n1) && (n3>n2)) ? printf("%d is a highest number\n",n3) : ((n1==n2) && (n3<n1) && (n3>n2)) ? printf("%d and %d are equal and higer than %d\n",n1,n2,n3) : ((n1==n3) && (n2<n1) && (n2<n3)) ? printf("%d and %d are equal and higer than %d\n",n1,n3,n2) : ((n2==n3) && (n1<n2) && (n1<n3)) ? printf("%d and %d are equal and higer than %d\n",n2,n3,n1) : printf("all are equal\n");
return 0;
}

