/*
  [p165 ���� ���� AddToNum.c]
  for���� �̿��ؼ� 0�̻�, �׸��� ���α׷� ����ڰ� �Է��� ���� ������ ���� 
  ��� ���ؼ� �� ����� ����ϴ� ������ �Ұ��ϰڴ�.

  ex)
  0���� num������ ����, num��? 10
  0���� 10������ ������� : 55
*/

#include <stdio.h>

int main_15(void)
{
	int i, num, total;

	printf("0���� num������ ����, num��? ");
	scanf("%d", &num);

	total = 0;
	for (i = 0; i <= num; i++)
		total += i;

	printf("0���� %d������ ������� : %d", num, total);
	return 0;
}

