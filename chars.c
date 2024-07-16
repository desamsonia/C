//Method 2
#include<stdio.h>
#include<string.h>

int rep_char(char str[])
{
    int i,j,k;
    j=strlen(str);
    for(i=0;i<j;i++)
    {
            for(k=i+1;k<j;k++)
            {
                    if(str[i] == str[k])
                            return 1;
            }
    }
    return 0;
}

void sep(char *msg)
{
        char str[100];
        char s[7][10];
        strcpy(str,msg);
        char *p=str;
        char *q;
        p=strtok(msg," ");
        int i=0;
        while(p)
        {
                q=p;
                strcpy(s[i++],p);
                p=strtok(NULL," ");
                *(q+strlen(q))=' ';
	}
	char res[100];
        int n =i,r;
	for(i=0;i<n;i++)
		printf("%s ",s[i]);
	for(i=0;i<n;i++)
	{
	        r = rep_char(s[i]);
		if(!r)
		{
	                if(i==0)
			{
			 strcpy(res,s[i]);
                         strcpy(res+strlen(res) , " ");
			 printf("res:%s\n",res);
			}

			else 
			{
				strcat(res+strlen(res),s[i]);
				strcpy(res+strlen(res)," ");
				printf("res:%s\n",res);
			}
		}
	}
	printf("res:%s\n",res);
}

int main()
{
        char str[100];
        printf("Enter string:");
        gets(str);
        sep(str);
}
