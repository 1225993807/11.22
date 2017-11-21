#include<stdio.h>
#include<string.h>
void main()
{
	char s1[50], s2[50];
	gets_s(s1);
	gets_s(s2);
	int a, b;
	a = strlen(s1);
	b = strlen(s2);
	int i, j;
	int k;
	int flag = 1;
	if (s1[a-1] == s2[b-1])
	{
		for (i = 0; i <= a; i++)
		{
			if (s1[a - i] != s2[a - i])
			{
				flag = 0;
				break;
			}
		}
		for (j = a - i + 1; j < a; j++)
			printf("%c", s1[j]);
	}
	else 
	{
		printf("null");
	}
}
	