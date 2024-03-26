#include "Being.hpp"

void being::getDigitalPortrait()
{
	int i = 1;

    for (thought& mind : thoughts)
    {
        cout << "\n\n" << i << ". Mysl z dnia: ";
        mind.getDate();
        cout << "Powod mysli: " << mind.getReason() << endl;
        cout << "Tresc mysli: " << mind.getDescr() << "\n\n";
        i++;
    }
}

being::being(string m_name):name(m_name){}

being::being() { name = "Jakub"; }
void being::operator+=(thought& m_thought)
{
	thoughts.push_back(m_thought);
}