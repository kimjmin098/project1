//#include<iostream>
//#include<cstdarg>//�������ڻ���� ���� ��� ���� 
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
//		cout << "��ɼ��� 1,2,3";
//		int choise;
//		cin >> choise;
//		if (cin.fail() == true)
//		{
//			cout << "���ڰ� �ƴѰ� ���� ���α׷� ����"<<endl;
//			cin.clear();
//			cin.ignore(100, '\n');
//			cout << "��ɼ��� 1,2,3";
//			//cout << "���α׷� ����" << endl;
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
//			cout << "�Է¿���" << endl;
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
//		va_list ap;//cstarg����� ����Ǿ�� ��밡�� 
//		va_start(ap, count);//va_list�� ù�ּҷ� number �� �ʱ�ȭ
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
//	va_list ap;//cstarg����� ����Ǿ�� ��밡�� 
//	va_start(ap, count);//va_list�� ù�ּҷ� number �� �ʱ�ȭ
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
//	va_list ap;//cstarg����� ����Ǿ�� ��밡�� 
//	va_start(ap, count);//va_list�� ù�ּҷ� number �� �ʱ�ȭ
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