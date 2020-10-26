#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	/*int rd = (int)time(NULL);
	srand(rd);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", rand());
	}*/
	/*char s[100] = { 0 };
	fgets(s, sizeof(s), stdin);
	int len = strlen(s);
	printf("%d\n", len);*/
	char s[] = "hello";
	int count = 0;
	while (s[count++]);
	count--;
	printf("%d\n", count);
	return 0;
}

