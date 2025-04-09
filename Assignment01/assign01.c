/*
 ���ϸ�: Assignment01-c
 ����: Chap-04-01 ���� - ������ �ӷ��� �Է� �޾� ��������� ����ϴ� ���α׷�
 �ۼ���: ������
 ��¥: 2025.04.09
 ���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0401(void);
double getMotionEnergy(double weight, double velocity);

int main(void)
{
    int r = assignment0401();
    return r;
}

/*
 * �Լ���: assignment0401()
 * ���: ����, �ӷ��� �Է¹ް�, � �������� ����ؼ� �����
 * �Է�: ����
 * ��ȯ: 0 (����), �ٸ� ���� ����
 */
int assignment0401(void)
{
    // 1. ������ �ӵ� �Է� �޾� ����
    double weight = 0.0, velocity = 0.0;
    printf("������ �ӵ��� �Է����ּ���: ");
    scanf("%lf %lf", &weight, &velocity);

    // 2. ������� ���
    double result = getMotionEnergy(weight, velocity);

    // 3. ���� ������� ���
    printf("���� = %.2f kg, �ӷ� = %.2f m/s �� ��������� %.2f J�Դϴ�.\n", weight, velocity, result);
    return 0;
}

/*
 * �Լ���: getMotionEnergy()
 * ���: ������ �ӷ��� �޾� ��������� ����Ͽ� ��ȯ
 * �Է�: ����(kg), �ӷ�(m/s)
 * ��ȯ: ������� (J)
 */
double getMotionEnergy(double weight, double velocity)
{
    double energy = 0.0;
    //������ = 1/2 * ���� * �ӵ� * �ӵ�
    energy = 0.5 * weight * velocity * velocity;
    return energy;
}
