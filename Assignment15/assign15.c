/*
 ���ϸ�: Assignment15-c
 ����: �����ϰ��� �ϴ� �޷��� ������ �Է¹޾Ƽ� �� ���� �ش��ϴ��� ����ϴ� ���α׷� �ۼ�
 �ۼ���: ������
 ��¥: 2025.04.09
 ���� : v0.3
*/

#define _CRT_SECURE_NO_WARNINGS
#define Exc_Fee 1.75
#include <stdio.h>

void CalculateExchange(void);

int main()
{
    CalculateExchange();
    return 0;
}

void CalculateExchange(void)
{
    double baseRate, discountRate, dollarsToBuy, wonAmount, feeAmount, finalRate;

    printf("��/�޷� �Ÿű�����? ");
    scanf("%lf", &baseRate);

    printf("ȯ�������(0~100%%)? ");
    scanf("%lf", &discountRate);

    feeAmount = baseRate * (Exc_Fee / 100.0) * (1.0 - discountRate / 100.0);
    finalRate = baseRate + feeAmount;

    printf("�޷� �� �� ȯ���� %.6f�Դϴ�.\n", finalRate);

    printf("������ �޷�(USD)? ");
    scanf("%lf", &dollarsToBuy);

    wonAmount = dollarsToBuy * finalRate;

    printf("USD %.2f �춧 ==> KRW %.2f\n", dollarsToBuy, wonAmount);
    return;
}
