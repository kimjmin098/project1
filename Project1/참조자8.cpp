//#include<iostream>
////#include<cstdarg>//가변인자사용을 위한 헤더 파일 
//using namespace std;
////c++의참조자
////할당된 메모리 공간에 다른이름을 붙이는 행위(별칭)
//
//
//int main()
//{
//	int number = 10;
//	int& fer_number = number;
//	int* ptr_number = &number;
//	//변수출력
//	cout<<number<<endl;
//	cout << fer_number << endl;
//	cout << *ptr_number << endl;
//	//주소출력
//	cout << &number << endl;
//	cout << &fer_number << endl;
//	cout << ptr_number << endl;
//
//	number += 10;
//	cout << number << endl;
//	cout << fer_number << endl;
//	cout << *ptr_number << endl;
//
//	cout << &number << endl;
//	cout << &fer_number << endl;
//	cout << ptr_number << endl;
//
//	fer_number += 10;
//	cout << number << endl;
//	cout << fer_number << endl;
//	cout << *ptr_number << endl;
//
//	cout << &number << endl;
//	cout << &fer_number << endl;
//	cout << ptr_number << endl;
//
//	//ptr_number += 10;
//	*ptr_number += 10;
//	cout << number << endl;
//	cout << fer_number << endl;
//	cout << *ptr_number << endl;
//
//	cout << &number << endl;
//	cout << &fer_number << endl;
//	cout << ptr_number << endl;
//
//
//	//int& fer_number2 ;//불가
//	//int& fer_number2 = NULL;//불가
//	int* fer_number2;
//	int* fer_number2 = NULL;
//	return 0;
//}