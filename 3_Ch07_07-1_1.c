/*
   [p155 문제 07 - 1 문제 1번]
   프로그램 사용자로부터 양의 정수를 하나 입력 받아서, 그 수만큼 "Hello world"를 출력하는 프로그램을 작성해보자.
*/


// 방법 1
#include <stdio.h>

int main(void)
{
	int i = 0, j;

	printf("양의 정수를 입력하시오 : ");
	scanf("%d", &i);

	j = 0;
	while (j < i)
	{
		printf("Hello world\n");
		j++;
	}

	return 0;
}

/*
// 방법 2
#include <stdio.h>

int main(void)
{
	int i = 0, j;

	printf("양의 정수를 하나 입력하시오 : ");
	scanf("%d", &i);

	j = 1;
	while (j <= i)
	{
		printf("Hello Wolrd!\n");
		j++;
	}

	return 0;
}
*/















