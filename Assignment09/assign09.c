/*
 ���ϸ�: Assignment09-c
 ����: �������� ����ð��� �� ������ �Է¹޾� �� �ð� �� �� �� ������ ����ϴ� ���α׷� �ۼ�
 �ۼ���: ������
 ��¥: 2025.04.11
 ���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Time(void);

int main()
{
	Time();
	return 0;
}

void Time(void)
{
	int totalsecond, hours, minutes, seconds;
	printf("����ð�(��)?");
	scanf("%d", &totalsecond);
	
	hours = totalsecond / 3600;
	minutes = (totalsecond % 3600) / 60;
	seconds = totalsecond % 60;

	printf("����ð���");
	hours > 0 ? printf("%d�ð�", hours) : printf("");
	minutes > 0 ? printf("%d��", minutes) : printf("");
	seconds > 0 ? printf("%d��", seconds) : printf("");
	
	return;
}
