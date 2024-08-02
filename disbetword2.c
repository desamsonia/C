/* Input: S = { “the”, “quick”, “brown”, “fox”, “quick”}, word1 = “the”, word2 = “fox”
Output: 3
Explanation: Minimum distance between the words “the” and “fox” is 3 */
#include<stdio.h>
#include<string.h>
int main()
{
    char arr[5][6] = {"the","suick","brown","fox","quick"};
    char s[5] = "the";
    char e[6] =  "brown";
    int len = sizeof(arr)/sizeof(arr[0]);
    int i,cnt=0,k,j,f=0,f1=0;
    for(i=0;i<5;i++)   
    {
         if(strcmp(arr[i],s)==0)
         {
            printf("i=%d\n",i);
            break; 
         }
                                
    }
    i++;
    for(k=i;k<5;k++)
    {
        cnt++; 
         if(strcmp(arr[k],e)==0)
         {
            printf("k=%d\n",k);
           break;
         }
                                   
    }
    printf("cnt = %d\n",cnt-1);
    return 0;

}