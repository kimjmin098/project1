//#include<iostream>
//#include<cstdarg>//�������ڻ���� ���� ��� ���� 
//using namespace std;
////����Ʈ �Ű� ����
////�Լ����� �������� �ʴ°��
////������ �������� �������� ó��
////
//void char_setting(string name= "red");
////���� �Ű����� 
////...(������ȣ)���ǰ��� ��밡��
//void printint(int number, ...)
//{
//	int temp;
//	va_list ap;//cstarg����� ����Ǿ�� ��밡�� 
//	va_start(ap, number);//va_list�� ù�ּҷ� number �� �ʱ�ȭ
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
//	cout << "�÷��̾��� �̸��� �����Ǿ����ϴ�." << endl;
//	cout << name << endl;
//}