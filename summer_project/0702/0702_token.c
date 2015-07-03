#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>
//미완성코드

/*교수님께
* 현재 strtok의 2번째 인자인 구분문자에 아스키코드 값중에
* 문자와 숫자를 제외한 모든 특수문자를 구분자로 사용하려 했는데 
* 구분자로 인식을 하지 못하는것 같습니다 
*
* 제가 코딩상에 실수를 했는지 매개변수에 이런식으로 접근하는게 불가능한건지
* 제가 찾기 힘들어서 질문드립니다.
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

	printf("문자열의 변화\n", str);

	for (int i = 0; i < strlen(str); i++)
		printf("%c %d\n", str[i], str[i]);

	return 0;
}

