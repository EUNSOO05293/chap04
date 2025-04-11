/*
 파일명: Assignment08-c
 내용: 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램을 작성.
 작성자: 이은수
 날짜: 2025.04.11
 버전 : v0.1
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
	printf("반지름의 길이?");
	scanf("%d", &r);
	v = (4.0 / 3.0) * PI * pow(r, 3);
	printf("구의 부피: %lf", v);
	return;
}





