#include "thought.hpp"

string thought::getReason()
{
	return reason;
}

string thought::getDescr()
{
	return description;
}

void thought::setDescr()
{
	cout << "Podaj opis mysli\n";
	//while (cin.get() != '\n');
	getline(cin, description);
}

void thought::setReason()
{
	cout << "Podaj powod mysli\n";
	while (cin.get() != '\n');
	getline(cin, reason);
}

void thought::getDate()
{
	cout << date.day << "/" << date.month << "/" << date.year << "\n";
}

void thought::setDate()
{
	cout << "Podaj date (dzien miesiac rok)\n";
	cin >> date.day >> date.month >> date.year;
}

thought::thought()
{
	setDate();
	setReason();
	setDescr();
}
