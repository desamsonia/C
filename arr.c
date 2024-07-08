#include <stdio.h>
int main() {
    int arr[] = {7, 5, 13, 6, 12,10};
    int *ptr = arr;
    int s1= sizeof(arr);
    int s2 = sizeof(ptr);
    printf("%d\n",*(arr+2));
    printf("%d\n",ptr[2]);
    printf("%d\n", *(ptr+2));
 printf("%d\n", s1);
 printf("%d\n", s2);
 
 
   // int s = sizeof(arr) / sizeof(arr[0]);
    int s = sizeof(arr);
    //printf("%d\n",Return);
    printf("%p\n",&arr);
    printf("%p\n",&arr[0]);
    printf("%d\n",arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%d\n",s);
  
}
