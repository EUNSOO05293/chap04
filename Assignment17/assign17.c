/*
 ���ϸ�: Assignment17-c
 ����: 31��° ��Ʈ�� 1�� ���� ���ؼ� 16������ 10������ ����ϴ� ���α׷� �ۼ�
 �ۼ���: ������
 ��¥: 2025.04.11
 ���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void BIT(void);

int main(void)
{
	BIT();
	return 0;
}

void BIT()
{
	unsigned int a = 1;

	a = a << 7;
	printf("7�� ��Ʈ�� 1�� ��: %08x %d\n", a, a);

	a = a << 8;
	printf("15�� ��Ʈ�� 1�� ��: %08x %d\n", a, a);
	
	a = a << 8;
	printf("23�� ��Ʈ�� 1�� ��: %08x %d\n", a, a);
	
	a = a << 8;
	printf("31�� ��Ʈ�� 1�� ��: %08x %d\n", a, a);

	return;
}
