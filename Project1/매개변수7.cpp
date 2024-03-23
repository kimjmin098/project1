//#include<iostream>
//#include<cstdarg>//가변인자사용을 위한 헤더 파일 
//using namespace std;
////디폴트 매개 변수
////함수값을 전달하지 않는경우
////지정은 오른쪽을 기준으로 처리
////
//void char_setting(string name= "red");
////가변 매개변수 
////...(생략부호)임의갯수 사용가능
//void printint(int number, ...)
//{
//	int temp;
//	va_list ap;//cstarg헤더가 연결되어야 사용가능 
//	va_start(ap, number);//va_list의 첫주소룰 number 로 초기화
//
//	for (int i = 0;i < number;i++)
//	{
//		temp = va_arg(ap, int);
//			cout << temp << " ";
//	}
//	va_end(ap);
//	cout << endl;
//}
//
//int main()
//{
//	char_setting("Blue");
//	char_setting();
//	printint(1,1);
//	printint(2,1,2);
//	printint(3,1,2,3);
//	printint(4,1,2,3,4);
//		return 0;
//}
//
//void char_setting(string name )
//{
//	cout << "플레이어의 이름이 설정되었습니다." << endl;
//	cout << name << endl;
//}