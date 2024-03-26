#pragma once
#include <string>
#include <iostream>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
};


class thought
{
private:
	string description;
	string reason;
	Date date;

public:
	thought();
	string getReason();
	string getDescr();
	void getDate();
	void setDescr();
	void setReason();
	void setDate();

};
