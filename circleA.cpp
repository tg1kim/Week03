/* ���� ������ ����ϴ� ���α׷� */

#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	float radius;					// ���� ������
	float area;						// ����
	printf("�������� �Է��Ͻÿ�: ");
	scanf("%f", &radius);
	area = 3.14 * radius * radius;
	printf("���� ����: %f\n", area);
}
