#include<stdio.h>

void uniq(char*, char*);
void check(char*, char*);

int main()
{
	char str1[1000], str2[1000], uniq1[1000] = {}, uniq2[1000] = {};
	char *pStr1 = str1;
	char *pStr2 = str2;
	char* pUniq1 = uniq1;
	char* pUniq2 = uniq2;
	scanf_s("%s %s", str1,1000 , str2,1000);
	uniq(pStr1, pUniq1);
	uniq(pStr2, pUniq2);
	check(pUniq1, pUniq2);
}
void uniq(char* str, char* uniq)
{
	char aChar = *str;
	*uniq = *str;
	int i = 0, j=1;
	while (*(str+i) != '\0')
	{
		if (*(str + i) != aChar)
		{
			aChar = *(str + i);
			*(uniq + j) = *(str + i);
			j++;
		}
		i++;
	}
}
void check(char *pUniq1, char *pUniq2) {
	int i = 0;
	while (*(pUniq1 +i) != '\0' or *(pUniq2 + i) != '\0')
	{
		if (*(pUniq1 + i) != *(pUniq2 + i))
		{
			printf("uniq(A) != uniq(B)");
			i = -1;
			break;
		}
		else i++;
	}
	if (i != -1) 
	{
		printf("uniq(A) = uniq(B)");
	}
}