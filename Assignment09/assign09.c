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

	printf("����ð��� %s%d%s",
	
	hours > 0 ? "" : (minutes > 0 ? "" : ""),
	hours > 0 ? hours : (minutes > 0 ? minutes : seconds),
	hours > 0 ? "�ð�" : (minutes > 0 ? "��" : "��");
	
	return;
}
