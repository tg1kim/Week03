// 사용자로부터 입력받은 2개의 정수의 합을 계산하여 출력

#include <stdio.h>

#pragma warning(disable: 4326 4996 6031)

void main() 
{
	int x;								// 첫번째 정수를 저장할 변수
	int y;								// 두번째 정수를 저장할 변수
	int sum;							// 2개의 정수의 합을 저장할 변수
	printf("첫번째 숫자를 입력하시오:");		// 입력 안내 메시지 출력
	scanf("%d", &x);					// 하나의 정수를 받아서 x에 저장
	printf("두번째 숫자를 입력하시오:");		// 입력 안내 메시지 출력
	scanf("%d", &y);					// 하나의 정수를 받아서 x에 저장
	sum = x + y;						// 변수 2개를 더한다.
	printf("두수의 합: %d\n", sum);		// sum의 값을 10진수 형태로 출력
}
