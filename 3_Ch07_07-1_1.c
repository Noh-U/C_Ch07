/*
   [p155 ���� 07 - 1 ���� 1��]
   ���α׷� ����ڷκ��� ���� ������ �ϳ� �Է� �޾Ƽ�, �� ����ŭ "Hello world"�� ����ϴ� ���α׷��� �ۼ��غ���.
*/


// ��� 1
#include <stdio.h>

int main(void)
{
	int i = 0, j;

	printf("���� ������ �Է��Ͻÿ� : ");
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
// ��� 2
#include <stdio.h>

int main(void)
{
	int i = 0, j;

	printf("���� ������ �ϳ� �Է��Ͻÿ� : ");
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















