#include <iostream>
#include "RandomMaker.h"

using namespace std;
int main()
{
	while (true)
	{
		//TODO : ���� ���� �����Ѵ�
		RandomMaker RM;
		RM.SetRandomNumber();
		vector<int> rand = RM.GetRandomNumber();

		//TODO : ����ڿ��� ���� �Է¹޴´�
		vector<int> input;
		for (int i = 0; i < 3; i++)
		{
			cin >> input[i];
		}

		//TODO : �Է¹��� ���� �����Ѵ�
		
	}
	
	
	
	//TODO : ��, ��Ʈ����ũ üũ�Ѵ�
	//TODO : ����� ����Ѵ�
	//TODO : ����� ���� ������ ����, ������Ѵ�
	return 0;
}