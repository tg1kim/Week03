/* ȯ���� ����ϴ� ���α׷�*/

#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	double rate;									// ��/�޷� ȯ��
	double usd;										// �޷�ȭ
	int krw;										// ��ȭ�� ������ ������ ����
	printf("ȯ���� �Է��Ͻÿ�: ");						// �Է� �ȳ� �޽���
	scanf("%lf", &rate);							// ����ڷκ��� ȯ���Է�
	printf("��ȭ �ݾ��� �Է��Ͻÿ�: ");					// �Է� �ȳ� �޽���
	scanf("%d", &krw);								// ��ȭ �ݾ� �Է�
	usd = krw / rate;								// �޷�ȭ�� ȯ��	
	printf("��ȭ %d���� %f�޷��Դϴ�.\n", krw, usd);	// ��� ��� ���
}