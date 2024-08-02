#include<stdio.h>
#include<string.h>
int primeCheck(int n)
{
    int i,cnt=0;
    for(i=1;i<=n;i++)
    {
        if(n%i == 0)
         cnt++;
    }
    if(cnt == 2)
       return 1;
    else
     return 0;   
}
int main()
{
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int i,l=0,k=0;
    int t1[10],t2[10];
    for(i=0;i<9;i++)
    {
        if(primeCheck(arr[i]))
        {
            t1[l++] = arr[i];
        }
        else{
            t2[k++] = arr[i];
        }
    }
    printf("k=%d\n",k);
    printf("l=%d\n",l);
    memmove(t1+l,t2,k*sizeof(int));
    for(i=0;i<9;i++)
    printf("%d ",t1[i]);

}