#pragma once
#include <random>
#include <vector>
using namespace std;

class RandomMaker
{
public:
	RandomMaker() : _randomNum(0)
	{

	}
	void SetRandomNumber();
	vector<int> GetRandomNumber() { return _randomNum; }
private:
	vector<int> _randomNum;
};

