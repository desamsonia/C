/* encrypt string */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* convertToHex(int num)
{
	char* temp = (char*)malloc(sizeof(char)* 10); 
	int i = 0;
	while (num != 0) {
		int rem = num % 16;
		if (rem < 10) rem = rem + 48;
		else rem = rem + 87;
		temp[i++] = rem;
		num = num / 16;
	}
	if (i == 0) temp[i++] = '0';
	temp[i] = '\0';
	int j, k = strlen(temp) - 1;
	for (j = 0; j < k; j++, k--) {
		char t = temp[j];
		temp[j] = temp[k];
		temp[k] = t;
	}

	return temp;
}
char* encryptString(char* S, int N)
{

	char* ans = (char*)malloc(sizeof(char)* (N * 3)); 
	ans[0] = '\0'; 
	for (int i = 0; i < N; i++) {

		char ch = S[i];
		int count = 0;
		char* hex;
		while (i < N && S[i] == ch) {
			count++;
			i++;
		}
		i--;
		hex = convertToHex(count);
        printf("_%s\n",hex);
		int len = strlen(ans);
        printf("len = %d\n",len);
		ans[len++] = ch;
		ans[len] = '\0';
		strcat(ans, hex);
	}
	int i, j, k = strlen(ans) - 1;
	for (i = 0, j = k; i < j; i++, j--) 
    {
		char t = ans[i];
		ans[i] = ans[j];
		ans[j] = t;
	}
	return ans;
}

int main()
{
	char S[20];
    printf("Enter string:");
    scanf("%s",S);
	int N = strlen(S);
	char* result = encryptString(S, N);
	printf("%s", result);
	return 0;
}
