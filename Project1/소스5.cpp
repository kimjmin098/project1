#include<iostream>
#include <cstdlib>//stdlib.h����
#include <ctime>  //time.h����
using namespace std;

int main()
{
	srand(time(NULL));//���� ���� ����
	int result[3];//�迭 ���� 
	int user[3];
	// [���ӽ����� ����ǰ�]
	for (int start =0; start<3; start++)
	{
		result[start] = (rand() % 9) + 1;
		for (int check = 0; check < start;check++)
		{
			if (result[start] == result[check] && start != check)
			{
				start--;//�ݺ� -1�ؼ� �ٽ�
			}
		}


		//rand�� 0~32767���ڸ� ���� ���� ����
		//cout << start +1 << ":�� "<< result[start]<<" �Դϴ�.  ";
	}
	int count = 1;//Ƚ��
	int staike, ball;
	//[���ӽ���]
	while (true)//���ѹݺ�
	{
		cout << "[" << count++ << "ȸ�� ���ھ߱�]" << endl;//count++//�μ��� 1����
		while (true)
		{
			cout << "1����9���� ���� �Է� �ϼ���==>";
			cin >> user[0] >> user[1] >> user[2];
			if (user[0] > 9 || user[1] > 9 || user[2] > 9 ||
				user[0] < 1 || user[1] < 1 || user[2] < 1)
			{
				cout << "������ ���� �Դϴ� !!!" << endl;
				continue;//�ݺ��� ó����ġ�� �̵�
			}
			//����ڰ� �ߺ��ǰ��� �Է��� ���ϵ��� ����
			else if (user[0] == user[1] || user[1] == user[2] || user[2] == user[0])
			{
				cout << "�ߺ��� ���� �Դϴ� !!!" << endl;
				continue;//�ݺ��� ó����ġ�� �̵�
			}

			break;
			


		}



	}
	
	


	return 0;
}