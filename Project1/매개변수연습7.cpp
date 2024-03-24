//#include<iostream>
//#include<cstdarg>//가변인자사용을 위한 헤더 파일 
//using namespace std;
//
//void sum(int count, ...);
//void min(int count, ...);
//void max(int count, ...);
//
//int main()
//{
//	void(*ptr)(int count, ...);
//	ptr = NULL;
//	while (true)
//	{
//		cout << "기능선택 1,2,3";
//		int choise;
//		cin >> choise;
//		if (cin.fail() == true)
//		{
//			cout << "숫자가 아닌값 선택 프로그램 종료"<<endl;
//			cin.clear();
//			cin.ignore(100, '\n');
//			cout << "기능선택 1,2,3";
//			//cout << "프로그램 종료" << endl;
//			break;
//		}
//		switch (choise)
//		{
//		case 1:
//			ptr = sum; break;
//		case 2:
//			ptr = min; break;
//		case 3:
//			ptr = max; break;
//		default:
//			cout << "입력오류" << endl;
//			ptr = NULL;
//		}
//	}
//	
//	ptr = sum;
//	ptr(5,1,2,3,4,5);
//	ptr = min;
//	ptr(5,1, 2, 3, 4, 5);
//	ptr = max;
//	ptr(5,1, 2, 3, 4, 5);
//	return 0;
//}
//void sum(int count, ...)
//{
//	int temp;
//	int addsum=0;
//		va_list ap;//cstarg헤더가 연결되어야 사용가능 
//		va_start(ap, count);//va_list의 첫주소룰 number 로 초기화
//	
//		for (int i = 0;i < count;i++)
//		{
//			temp = va_arg(ap, int);
//			cout << temp << " ";
//			addsum += temp;
//				//cout << temp << " ";
//		}
//		cout << addsum << " ";
//		va_end(ap);		
//		cout << endl;
//}
//void min(int count, ...)
//{
//	int temp;
//	
//	va_list ap;//cstarg헤더가 연결되어야 사용가능 
//	va_start(ap, count);//va_list의 첫주소룰 number 로 초기화
//    int va_min = ap[0];
//	for (int i = 0;i < count;i++)
//	{
//		temp = va_arg(ap, int);
//		cout << temp << " ";
//		if (va_min  > temp)
//		{
//			va_min = temp;
//		}
//		//cout << temp << " ";
//	}
//	cout << va_min << " ";
//	va_end(ap);
//	cout << endl;
//}
//void max(int count, ...)
//{
//	int temp;
//	
//	va_list ap;//cstarg헤더가 연결되어야 사용가능 
//	va_start(ap, count);//va_list의 첫주소룰 number 로 초기화
//    int va_max = ap[0];
//	for (int i = 0;i < count;i++)
//	{
//		temp = va_arg(ap, int);
//		if (va_max <  temp)
//		{
//			va_max = temp;
//		}
//		//cout << temp << " ";
//	}
//	cout << va_max << " ";
//	va_end(ap);
//	cout << endl;
//}