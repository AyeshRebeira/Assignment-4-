#include "weight.h"
#include <string>
#include <iostream>

using namespace std;

kiloGrams::kiloGrams()
{
	uNum = 0;
	uName = "Kg";
};

kiloGrams::kiloGrams(float num)
{
	uNum = num;
	uName = "Kg";
};

float kiloGrams::getValue() const
{
	return uNum;
};

void kiloGrams::setValue(const float num)
{
	uNum = num;
};

void kiloGrams::setName(string temp)
{
	bool found = false;
	string names[4] = { "Kg" , "kiloGrams","kg","kilograms" };
	for (int i = 0; i < 4; i++)
		if (temp == names[i])
		{
			uName = temp;
			found = true;
		}
	if (found)
	{
		cout << "Name of unit: " << temp << endl;
	}
	else
		cout << temp << ", not found." << endl;
};

string kiloGrams::getName() const
{
	return uName;
};

ostream& operator << (ostream &output, const kiloGrams &kg)
{
	output << kg.getValue() << " " << kg.getName();
	return output;
};

istream& operator >> (istream &input, kiloGrams &kg)
{
	float tempVal;
	string tempNam;
	cout << "Enter a value:";
	input >> tempVal;
	cout << "Enter name of the unit:";
	input >> tempNam;
	kg.setValue(tempVal);
	kg.setName(tempNam);
	return input;
};

kiloGrams::kiloGrams(kiloGrams &o)
{
	uNum = o.getValue();
	uName = o.getName();
};

bool kiloGrams::operator < (const kiloGrams& kg) const
{
	cout << "Program in the operator <\n";
	return (uNum < kg.getValue());
};

bool kiloGrams::operator == (const kiloGrams& kg) const
{
	cout << "Programn in the operator ==\n";
	return (uNum < kg.getValue());
};

bool kiloGrams::operator != (const kiloGrams& kg) const
{
	cout << "Program in the operator !=\n";
	return (uNum != kg.getValue());
};

bool kiloGrams::operator >= (const kiloGrams& kg) const
{
	cout << "Program in the operator >=\n";
	return (uNum >= kg.getValue());
};

bool kiloGrams::operator <= (const kiloGrams& kg) const
{
	cout << "Program in the operator <=\n";
	return (uNum <= kg.getValue());
};

bool kiloGrams::operator > (const kiloGrams& kg) const
{
	cout << "Program is in the operator >\n";
	return (uNum > kg.getValue());
};
