#include<iostream>
#include <cstdlib>//stdlib.h동일
#include <ctime>  //time.h동일
using namespace std;

int main()
{
	srand(time(NULL));//랜덤 사용시 설정
	int result[3];//배열 선언 
	int user[3];
	// [게임시작전 상대의값]
	for (int start =0; start<3; start++)
	{
		result[start] = (rand() % 9) + 1;
		for (int check = 0; check < start;check++)
		{
			if (result[start] == result[check] && start != check)
			{
				start--;//반복 -1해서 다시
			}
		}


		//rand는 0~32767숫자를 랜덤 으로 나옴
		//cout << start +1 << ":은 "<< result[start]<<" 입니다.  ";
	}
	int count = 1;//횟차
	int staike, ball;
	//[게임시작]
	while (true)//무한반복
	{
		cout << "[" << count++ << "회차 숫자야구]" << endl;//count++//인쇄후 1증가
		while (true)
		{
			cout << "1부터9까지 숫자 입력 하세요==>";
			cin >> user[0] >> user[1] >> user[2];
			if (user[0] > 9 || user[1] > 9 || user[2] > 9 ||
				user[0] < 1 || user[1] < 1 || user[2] < 1)
			{
				cout << "범위외 숫자 입니다 !!!" << endl;
				continue;//반복문 처음위치로 이동
			}
			//사용자가 중복되값을 입력을 못하도록 설정
			else if (user[0] == user[1] || user[1] == user[2] || user[2] == user[0])
			{
				cout << "중복된 숫자 입니다 !!!" << endl;
				continue;//반복문 처음위치로 이동
			}

			break;
			


		}



	}
	
	


	return 0;
}