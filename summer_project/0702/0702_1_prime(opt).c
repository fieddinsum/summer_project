#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char   str[] = "forum falinux com";
	char	*ptr;
	int		 ndx;

	printf("�Լ� ȣ�� ��: %s\n", str);

	ptr = strtok(str, " ");
	printf("%s\n", ptr);		//ptr �� ��ū
	/*
	while (ptr = strtok(NULL, " "))
	{
		printf("%s\n", ptr);
	}

	printf("�Լ� ȣ�� ��: %s\n", str);

	// �Լ� ȣ�� �Ŀ��� ���� ���ڿ��� ������ �ٲ�Ƿ� �����ؾ� �մϴ�.

	printf("���ڿ��� ��ȭ\n", str);

	for (ndx = 0; ndx < 17; ndx++)
		printf("%c %d\n", str[ndx], str[ndx]);
		*/

	return 0;
}