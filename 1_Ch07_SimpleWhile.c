/*
  [p149 ���� ���� SimpleWhile.c]
  �Ʒ� ������� �ݺ����� ���ؼ� ����Ͻÿ�.
  Hello world! 0
  Hello world! 1
  Hello world! 2
  Hello world! 3
  Hello world! 4
*/

#include <stdio.h>

int main_1(void)
{
	int i = 0;

	while (i < 5)
	{
		printf("Hello world! %d\n", i);
		i++;
	}
	return 0;
}