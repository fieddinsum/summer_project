#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>
//�̿ϼ��ڵ�

/*�����Բ�
* ���� strtok�� 2��° ������ ���й��ڿ� �ƽ�Ű�ڵ� ���߿�
* ���ڿ� ���ڸ� ������ ��� Ư�����ڸ� �����ڷ� ����Ϸ� �ߴµ� 
* �����ڷ� �ν��� ���� ���ϴ°� �����ϴ� 
*
* ���� �ڵ��� �Ǽ��� �ߴ��� �Ű������� �̷������� �����ϴ°� �Ұ����Ѱ���
* ���� ã�� ���� �����帳�ϴ�.
*/
int main(void)
{
	char   str[1000] = {0, };
	char	*ptr;
	char token[62] = { 0, };
	int		k=0;

	for (int i = 1; i < 126; i++) {
		if (!(isalnum(i)||i==32)) {
			token[k] = i;
			k++;				
		}

	}
	printf("enter sesentense: ");
	gets(str);

	ptr = strtok(str,token);
	printf("%c", ptr);
	while (ptr = strtok(NULL,token))
	{
		printf("%s\n", ptr);
	}

	printf("���ڿ��� ��ȭ\n", str);

	for (int i = 0; i < strlen(str); i++)
		printf("%c %d\n", str[i], str[i]);

	return 0;
}

