// 평균을 계산하는 프로그램

#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
    double num1, num2, num3;
    double sum, avg;

    printf("3개의 실수를 입력하시오:  ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);	    // 3개의 실수 입력
    sum = num1 + num2 + num3;
    avg = sum / 3.0;
    printf("합계 = %.2f\n", sum);		            // 소수점 이하를 2자리로 표시
    printf("평균 = %.2f\n", avg);
}
