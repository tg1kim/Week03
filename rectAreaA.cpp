#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	double w, h, area, perimeter;
	w = 10.0;
	h = 5.0;
	area = w * h;
	perimeter = 2 * (w + h);
	printf("�簢���� ����: %lf\n", area); 	
	printf("�簢���� �ѷ�: %lf\n", perimeter);
}