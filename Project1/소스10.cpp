#include<iostream>
using namespace std;
//일반함수(void)
//return함수
//매개변수르에 따릉 함수 설계(변수 ,포인터 ,배열,구조체,참조자)
//함수오버로딩(이름동일,매개변수 순서,개수다름)
//재귀함수
//재귀함수설계 방식 
//1.종효조건 설계
//2. 작업 내용 설계
//3.자기자신 호출
//장점 
//1.반복문 없이 반복수행
//2.변수 사용갯수 줄임
//3.복잡한 논리 쉽게 표현
//단점
//1.속리속도 늦다
//2.스택 사용(스택오버플루우 가능성 있음
//3.종료 조건 작성필요 
//4.너무 많은 호출안되게 설계 필요

int Factorial(int N)
{
	//종료 조건 설계
	//ex) N=5, N!=1 *2*3*4*5
	//factorial(5)=5*4*3*2*1
	if (N == 1)
		return N;
	return N * Factorial(N - 1);
}

//피보나치수열 
int Fibo(int N)
{
	if (N <= 1)
		return N;
	return Fibo(N - 1) + Fibo(N - 2);
}
void Fn(int N)
{
	for (int i = 1;i <= N;i++)
	{
		cout << Fibo(i) << "  ";

	}
	cout << endl;
}


int main()
{
	int N;
	cout << "팩토리얼 계산기 숫자 입력>>";
	cin >> N ;
	cout << N << "!:" <<  Factorial(N);

	cout << " 피보나치수열 출력갯수";
	cin >> N;
	Fn(N);



	return 0;
}