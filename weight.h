#ifndef _WEIGHT_H_
#define _WEIGHT_H_

#include <string>
using namespace std;

class kiloGrams
{
    public:
        kiloGrams(float num);
	kiloGrams();
        kiloGrams(kiloGrams& o);
        void setValue(const float num);
	void setName(string temp);
	float getValue() const;
	string getName() const;
	kiloGrams operator = (const kiloGrams& kg);
	bool operator == (const kiloGrams& kg) const;
	bool operator != (const kiloGrams& kg) const;
	bool operator <= (const kiloGrams& kg) const;
	bool operator > (const kiloGrams& kg) const;
	bool operator < (const kiloGrams& kg) const;
	bool operator >= (const kiloGrams& kg) const; 

    private:
        float uNum ;
        string uName;

};
	ostream& operator << (ostream& output, const kiloGrams& kg);
	istream& operator >> (istream& input, kiloGrams& kg);
#endif

