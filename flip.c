/* Input 1:   A="010"
 * Output 1:  [1 1]
 * Input 2:   A="111"
 * Output 2:  [ ]
 */

#include<stdio.h>
int main()
{
  char arr[5] = "10101";
  int i=-1,j=-1,k;
  int summ=0;
  int start=0;
  int mxsum=0;
  for(k=0;k<5;k++) // 010
  {
	  if(arr[k] == '1') summ--; // 0
	  else summ++; // 1

	  if(summ < 0)
	  {
		  summ=0;
		  start=k+1;
	  }

	  if(summ > mxsum)
	  {
		  mxsum=summ; // 1
		  i=start; //i=0
		  j=k;//k=0
	  }
  }

  int res[2],a;
  if(i==-1)
  {
    res[0] = '\0';
	printf("[  ]");    
  }
  if(i!=-1)
  {
  res[0]=i+1;
  res[1]=j+1;  
  res[2]='\0';
  for(a=0;res[a];a++)
	  printf("%d ",res[a]);
  }
  return 0;

}
