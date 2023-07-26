#include "RandomMaker.h"

void RandomMaker::SetRandomNumber()
{
	vector<int> randomNumber;
	random_device rd;
	minstd_rand gen(rd());
	uniform_int_distribution<int> dis(0, 9);
	for (int i = 0; i < 3; i++)
	{
		randomNumber.push_back(dis(gen));
	}
	_randomNum = randomNumber;
}