//#include<iostream>
//using namespace std;
//// 참조자 + 함수
//void plusvalue(int value)
//{
//	value++;
//}
//void plusreference(int& value)
//{
//	value++;
//}
//void pluspointer(int* value)
//{
//	*value+=1;
//}
//
//void change(int& data)
//{
//   data = -data;
//}
//void square(int& data)
//{
//	data = data*data;
//}
//void square1(int data)
//{
//	data = data * data;
//}
//
//int main()
//{
//	int data = 1;
//	cout << data << endl;//1
//	plusvalue(data);//callby value
//	cout << data << endl;//1
//	plusreference(data);//call by reference
//	cout << data << endl;//2
//	pluspointer(&data);//call by reference
//	cout << data << endl;//3
//
//	int praceice = 2;
//
//	change(praceice);//부호변경
//	cout << praceice << endl;//-2
//
//	square(praceice);//제곱
//	cout << praceice << endl;//4
//
//	square1(praceice);//제곱
//	cout << praceice << endl;//2
//	return 0;
//}