/*
 ���ϸ�: Assignment08-c
 ����: �������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷��� �ۼ�.
 �ۼ���: ������
 ��¥: 2025.04.11
 ���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define PI 3.141592

void SphereVolume(void);

int main()
{
	SphereVolume();
	return 0;
}

void SphereVolume(void)
{
	int r;
	double v;
	printf("�������� ����?");
	scanf("%d", &r);
	v = (4.0 / 3.0) * PI * pow(r, 3);
	printf("���� ����: %lf", v);
	return;
}





