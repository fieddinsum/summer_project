#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char   str[] = "forum falinux com";
	char	*ptr;
	int		 ndx;

	printf("함수 호출 전: %s\n", str);

	ptr = strtok(str, " ");
	printf("%s\n", ptr);		//ptr 에 토큰
	/*
	while (ptr = strtok(NULL, " "))
	{
		printf("%s\n", ptr);
	}

	printf("함수 호출 후: %s\n", str);

	// 함수 호출 후에는 원본 문자열의 내용이 바뀌므로 주의해야 합니다.

	printf("문자열의 변화\n", str);

	for (ndx = 0; ndx < 17; ndx++)
		printf("%c %d\n", str[ndx], str[ndx]);
		*/

	return 0;
}