#include <stdio.h>

#pragma warning(disable: 4996 4326 6001 6031)

typedef int NatNo;

NatNo Zero();
int   IsZero(NatNo x);
NatNo Succ(NatNo x);
NatNo Pred(NatNo x);
NatNo Add(NatNo x, NatNo y);

// Practise
int   Equal(NatNo x, NatNo y);
int   Greater(NatNo x, NatNo y);
NatNo Sub(NatNo x, NatNo y);		// Error example

// HW
NatNo Mul(NatNo x, NatNo y);
NatNo Div(NatNo x, NatNo y);		// Error case
NatNo Mod(NatNo x, NatNo y);		// Error case

void main()
{
	while (1) {
		int nFtn;
		NatNo x, y, z;
		printf("Is1, Su2, Ad3, Eq4, Gt5, Sb6, Mu7, Di8, Mo9: ? ");
		scanf("%d", &nFtn);
		if (nFtn < 1 || nFtn > 9)
			break;
		printf("x ? ");
		scanf("%d", &x);
		if (nFtn > 2) {
			printf("y ? ");
			scanf("%d", &y);
		}
		switch (nFtn) {
		case 1:
			z = IsZero(x);
			break;
		case 2:
			z = Succ(x);
			break;
		case 3:
			z = Add(x, y);
			break;
		case 4:
			z = Equal(x, y);
			break;
		case 5:
			z = Greater(x, y);
			break;
		case 6:
			z = Sub(x, y);
			break;
		case 7:
			z = Mul(x, y);
			break;
		case 8:
			z = Div(x, y);
			break;
		case 9:
			z = Mod(x, y);
		}
		printf("z = %d\n\n", z);
	}
}

NatNo Error()
{
	printf("Error:: not applicable\n");
	return Zero();
}

NatNo Zero()
{
	return 0;
}

int IsZero(NatNo x)
{
	// [1]:(Z)	IsZero(Zero) ::= true
	// [2]:(N)	IsZero(Succ(x)) ::= false

	if (x == Zero())	// ==는 어쩔 수 없이
		return true;	// [1]
	return false;		// [2]
}

NatNo Succ(NatNo x)
{
	return x + 1;		// +는 어쩔 수 없이
}

NatNo Pred(NatNo x)
{
	if (IsZero(x))
		return Error();
	return x - 1;		// -는 어쩔 수 없이
}

/*** 
	구현하기 위하여 여기까지는 어쩔 수 없이 
	다른 연산자를 사용하였지만
	여기서부터는 위에서 정의된 연산자 이외에
	다른 연산자는 절대로 사용할 수 없다.
***/

#define	ADD	1

NatNo Add(NatNo x, NatNo y)
{	// x + y
#if ADD == 1
	// Method 1
	// (x+1) + y ::= (x + y) + 1							;; 일반 원리
	//     x  y
	// (1) Z  A --> Add(0, y) ::= y							;; 중단 조건
	// (2) N  A --> Add(x + 1, y) ::= Add(x, y) + 1
	// [1]:(Z,A)	Add(Zero(), y) ::= y
	// [2]:(N,A)	Add(Succ(x), y) ::= Succ(Add(x, y))
	if (IsZero(x))
		return y;
	return Succ(Add(Pred(x), y));
#else
	// Method 2
	// x + (y+1) ::= (x + y) + 1							;; 일반 원리
	//     x  y
	// (1) ?  ? --> ?							;; 중단 조건
	// (2) 
	// [1]:(?,?)	Add(?, ?) ::= ?
	// [2]:(?,?)	Add(?, ?) ::= ?

	return Zero();
#endif
}

#define	EQUAL	1

int Equal(NatNo x, NatNo y)
{	// x == y
	// (x+1) == (y+1) ::= x == y						;; 일반 원리
	//     x  y
	// (1) Z  Z --> true								;; 중단 조건
	// (2) Z  N --> false
	// (3) N  Z --> false
#if EQUAL == 1
	// Method 1
	// (1)과 (2)를 합침(두 결과가 각각 true, false)
	// [1]:(Z,A)	Equal(Zero(), y) ::= IsZero(y)				;; IF IsZero(y) THEN true ELSE false
	// [2]:(N,Z)	Equal(Succ(x), Zero()) ::= false
	// [3]:(N,N)	Equal(Succ(x), Succ(y)) ::= Equal(x, y)

	return Zero();
#else
	// Method 2
	//     x  y
	// (1) Z  Z --> true								;; 중단 조건
	// (2) Z  N --> false
	// (3) N  Z --> false
	// (1)과 (3)을 합침
	// [1]:(?,?)	Equal(?, ?) ::= ?
	// [2]:(?,?)	Equal(?, ?) ::= ?
	// [3]:(?,?)	Equal(?, ?) ::= ?

	return Zero();
#endif
}

#define	GREATER	1

int Greater(NatNo x, NatNo y)
{	// x > y
	// (x+1) > (y+1) ::= x > y							;; 일반 원리
#if GREATER == 1
	// Method 1
	//     x  y
	// (1) ?  ? --> ?								;; 중단 조건
	// (2) 
	// (3) 
	// (1)과 (2)를 합침
	// [1]:(?,?)	Greater(?, ?) ::= ?
	// [2]:(?,?)	Greater(?, ?) ::= ?
	// [3]:(?,?)	Greater(?, ?) ::= ?

	return Zero();
#else
	// Method 2
	// (1) ?  ? --> ?								;; 중단 조건
	// (2) 
	// (3) 
	// (1)과 (3)을 합침
	// [1]:(?,?)	Greater(?, ?) ::= ?
	// [2]:(?,?)	Greater(?, ?) ::= ?
	// [3]:(?,?)	Greater(?, ?) ::= ?

	return Zero();
#endif
}

#define	SUBTRACT	1

NatNo Sub(NatNo x, NatNo y)
{	// x - y
	// (x+1) - (y+1) ::= x - y							;; 일반 원리
#if SUBTRACT == 1
	// Method 1
	// (1) ?  ? --> ?									;; 중단 조건
	// (2) 
	// (3) 
	// (1)과 (2)를 합침
	// [1]:(?,?)	Sub(?, ?) ::= ?
	// [2]:(?,?)	Sub(?, ?) ::= ?
	// [3]:(?,?)	Sub(?, ?) ::= ?

	return Zero();
#else
	// Method 2
	//     x  y
	// (1) ?  ? --> ?									;; 중단 조건
	// (2)
	// (3) 
	// (1)과 (3)을 합침
	// [1]:(?,?)	Sub(?, ?) ::= ?
	// [2]:(?,?)	Sub(?, ?) ::= ?
	// [3]:(?,?)	Sub(?, ?) ::= ?

	return Zero();
#endif
}

#define	MULTIPLY	1

NatNo Mul(NatNo x, NatNo y)
{	// x * y
#if MULTIPLY == 1
	// Method 1
	// (x+1) * y ::= x * y + y							;; 일반 원리
	//     x  y
	// (1) ?  ? --> ?						;; 중단 조건
	// (2) 
	// [1]:(?,?)	Mul(?, ?) ::= ?
	// [2]:(?,?)	Mul(?, ?) ::= ?

	return Zero();
#else
	// Method 2
	// x * (y+1) ::= x * y + x							;; 일반 원리
	//     x  y
	// (1) ?  ? --> ?						;; 중단 조건
	// (2) 
	// [1]:(?,?)	Mul(?, ?) ::= ?
	// [2]:(?,?)	Mul(?, ?) ::= ?

	return Zero();
#endif
}

NatNo Div(NatNo x, NatNo y)
{	// x / y
	// (x+y) / y ::= x / y + 1							;; 일반 원리
	//     x  y
	// (1) ?  ? --> ?					;; 중단 조건
	// (2) 
	// [1]:(?,?)	Div(?, ?) ::= ?
	// [2]:(?,?)	Div(?, ?) ::= ?

	return Zero();
}

NatNo Mod(NatNo x, NatNo y)
{	// x % y
	// (x+y) % y ::= x % y								;; 일반 원리
	//     x  y
	// (1) ?  ? --> ?					;; 중단 조건
	// (2) 
	// [1]:(?,?)	Mod(?, ?) ::= ?
	// [2]:(?,?)	Mod(?, ?) ::= ?

	return Zero();
}

/****

[예제]
NatNo Add(NatNo x, NatNo y)
{
	// Add(x + 1, y) = Add(x, y) + 1
	//     x  y
	// (1) Z  A --> Add(0, y) ::= y
	// (2) N  A --> Add(x+1, y) ::= Add(x, y) + 1
	// Rule
	// Z는 Zero이고, N는 Nonzero이고, A는 All 즉 Zero/Nonzero임을 의미한다.
	// [1]:(Z,A)	Add(Zero(), y) ::= y						;; 0 + y ::= y
	// [2]:(N,A)	Add(Succ(x), y) ::= Succ(Add(x, y))

	// Coding
	if (IsZero(x))						// y는 아무런 제약조건이 없음
		return y;						// [1]
	// 여기서부터 x는 Zero가 아님
	return Succ(Add(Pred(x), y));		// [2]

}

위의 예제를 살펴보면
(1) 연산자에 대한 규칙을 만들고
(2) 모든 상황에 대하여 적용할 규칙이 항상 존재하는 것을 증명하고
(3) 어떠한 상황에서도 유일하게 하나만 있다는 것을 증명하고
(4) 그 규칙에 따라 코딩이 되었다.

위의 연산자 중에서 비어 있는 연산자 함수에 대하여
앞의 (1), (2), (3), (4)의 과정을 따라 코딩하라


NatNo Operator(NatNo x, NatNo y)
{
	// 
	// 이 곳에서는 모든 경우에서도 적용되고
	// 오직 하나의 규칙만 적용된다는 것을 보인다
	//
	
	.......
	.......		// 위의 규칙에 따라 실제로 코딩을 한다.
	.......
}

빈 곳으로 되어 있는 모든 연산자에 대하여
각각 위와 같은 방식으로 채워 넣는다.

****/