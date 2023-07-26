#include <iostream>
#include "RandomMaker.h"

using namespace std;
int main()
{
	while (true)
	{
		//TODO : 랜덤 수를 생성한다
		RandomMaker RM;
		RM.SetRandomNumber();
		vector<int> rand = RM.GetRandomNumber();

		//TODO : 사용자에게 수를 입력받는다
		vector<int> input;
		for (int i = 0; i < 3; i++)
		{
			cin >> input[i];
		}

		//TODO : 입력받은 수를 검증한다
		
	}
	
	
	
	//TODO : 볼, 스트라이크 체크한다
	//TODO : 결과를 출력한다
	//TODO : 결과에 따라 게임을 종료, 재시작한다
	return 0;
}