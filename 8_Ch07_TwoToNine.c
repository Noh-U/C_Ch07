/*
  [p156 ���� ���� TwoToNine.c]
  while���� ��ø���Ѽ� ��ø�� while�� �ϳ��� �������� ��ü ����ϴ� �ڵ带 �ۼ��Ͻÿ�.
*/

#include <stdio.h>

int main_8(void)
{
	int i = 2, j = 0;

	while (i < 10)
	{
		j = 1;
		while (j < 10)
		{
			printf("%d �� %d = %d\n", i, j, i * j);
			j++;
		}
		i++;
	}
	return 0;
}