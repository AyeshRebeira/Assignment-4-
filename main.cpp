#include <iostream>
#include <string>
#include <fstream>
#include "weight.h"

using namespace std;

int main()
{
    kiloGrams kg1;
    kiloGrams kg2(2);
    kiloGrams kg3(kg2);

    cout << kg1 << endl;
    cout << kg2 << endl;
    cout << kg3 << endl;
    
    cout << "TEST SETTERS\n";

    kg1.setValue(100);
    kg1.setName("Kg");

    cout << kg1 << endl;
    
    cout << "TEST COMPARISON OPERATORS\n";

    if (kg1 < kg2)
	cout << "kg1 is smaller than kg2\n";
    if (kg1 > kg2)
	cout << "kg1 is greater than kg2\n";
    if (kg3 == kg1)
	cout << "kg3 is equal to kg1\n";
    if (kg2 != kg3)
	cout << "kg2 is not equal to kg3\n";

    cout << "TESTING INPUT & OUTPUT\n";

    cin >> kg3;
    cout << kg3 << endl;

    return 0;
}
