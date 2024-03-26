
#pragma once
#include <vector>
#include "thought.hpp"

using namespace std;

class being
{
private:
	string name;
	vector<thought> thoughts;
public:
	being(string m_name);
	being();
	void getDigitalPortrait();
	void operator+=(thought& m_thought);
};