/*
 ���ϸ�: Assignment16-c
 ����: 0~255 ������ ���� red, green, blue�� ������ 3�� �Է¹޾Ƽ� RGB ������ ���� ����ϴ� ���α׷� �ۼ�
 �ۼ���: ������
 ��¥: 2025.04.11
 ���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void RGB(void);

int main(void)
{
	RGB();
	return 0;
}

void RGB(void)
{
	int red, green, blue, value = 0;

	printf("red?");
	scanf("%d", &red);
	red %= 255;

	printf("green?");
	scanf("%d", &green);
	green %= 255;

	printf("blue?");
	scanf("%d", &blue);
	blue %= 255;

	value += blue * 255 * 255;    
	value += green * 255;
	value += red;
	
	printf("RGB Ʈ���÷�: %06X", value);
	return;
}
