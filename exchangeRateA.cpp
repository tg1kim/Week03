/* 환율을 계산하는 프로그램*/

#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	double rate;									// 원/달러 환율
	double usd;										// 달러화
	int krw;										// 원화는 정수형 변수로 선언
	printf("환율을 입력하시오: ");						// 입력 안내 메시지
	scanf("%lf", &rate);							// 사용자로부터 환율입력
	printf("원화 금액을 입력하시오: ");					// 입력 안내 메시지
	scanf("%d", &krw);								// 원화 금액 입력
	usd = krw / rate;								// 달러화로 환산	
	printf("원화 %d원은 %f달러입니다.\n", krw, usd);	// 계산 결과 출력
}