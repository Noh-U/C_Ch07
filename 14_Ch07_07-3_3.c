/*
  [p161 ���� 07-3 ���� 3��]
  while���� ��ø���� ���� TwoToNine.c�� do~while���� ��ø������� �� ������ ����.
  do~while���� ��ø�� ���ؼ��� ������ ����� ��������, while���� ��ø�� �����Ͽ�����,
  ����� ������ �����ϴ�.
*/

#include <stdio.h>

int main_14(void)
{
	int i = 2, j = 0;

	do
	{
		j = 1;
		do
		{
			printf("%d �� %d = %d\n", i, j, i * j);
			j++;
		} while (j < 10);
		i++;
	} while (i < 10);
	return 0;
}