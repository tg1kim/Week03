// ����� ����ϴ� ���α׷�

#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
    double num1, num2, num3;
    double sum, avg;

    printf("3���� �Ǽ��� �Է��Ͻÿ�:  ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);	    // 3���� �Ǽ� �Է�
    sum = num1 + num2 + num3;
    avg = sum / 3.0;
    printf("�հ� = %.2f\n", sum);		            // �Ҽ��� ���ϸ� 2�ڸ��� ǥ��
    printf("��� = %.2f\n", avg);
}
