/* Input: S = { “the”, “quick”, “brown”, “fox”, “quick”}, word1 = “the”, word2 = “fox”
Output: 3
Explanation: Minimum distance between the words “the” and “fox” is 3 */

#include<stdio.h>
#include<string.h>
int main()
{
    char *arr[6] = {"the","quick","brown","fox","quick"};
    char *s = "the";
    char *e =  "fox";
    int len = sizeof(arr)/sizeof(arr[0]);
   // printf("len = %d\n",len);
    int i,cnt=0,k,j;
    for(i=0;i<len;i++)   
    {
     if(strcmp(arr[i],s)==0)
     {
        i++;
        break;
     }
    }
 //  printf("i=%d\n",i);
    for(k=i;k<5;k++)
    {
        cnt++;
      if(strcmp(arr[k],e)==0) break; 
    }
    printf("cnt = %d\n",cnt);
    return 0;

}