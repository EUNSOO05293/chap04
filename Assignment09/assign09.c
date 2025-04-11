/*
 파일명: Assignment09-c
 내용: 동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는 프로그램 작성
 작성자: 이은수
 날짜: 2025.04.11
 버전 : v0.1
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
	printf("재생시간(초)?");
	scanf("%d", &totalsecond);
	
	hours = totalsecond / 3600;
	minutes = (totalsecond % 3600) / 60;
	seconds = totalsecond % 60;

	printf("재생시간은 %s%d%s",
	
	hours > 0 ? "" : (minutes > 0 ? "" : ""),
	hours > 0 ? hours : (minutes > 0 ? minutes : seconds),
	hours > 0 ? "시간" : (minutes > 0 ? "분" : "초");
	
	return;
}
