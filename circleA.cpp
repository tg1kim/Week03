/* 원의 면적을 계산하는 프로그램 */

#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	float radius;					// 원의 반지름
	float area;						// 면적
	printf("반지름을 입력하시오: ");
	scanf("%f", &radius);
	area = 3.14 * radius * radius;
	printf("원의 면적: %f\n", area);
}
