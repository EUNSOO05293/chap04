/*
 ���ϸ�: Assignment08-c
 ����: �������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷��� �ۼ�.
 �ۼ���: ������
 ��¥: 2025.04.11
 ���� : v0.2
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define PI 3.141592

double SphereVolume(int r);

int main()
{
	int radius;
	double volume;

	printf("�������� ����? ");
	scanf("%d", &radius);

	volume = SphereVolume(radius);
	printf("���� ����: %lf\n", volume);

	return 0;
}

double SphereVolume(int r)
{
	return (4.0 / 3.0) * PI * pow(r, 3);
}
