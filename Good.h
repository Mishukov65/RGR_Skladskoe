#pragma once

#include <string>
#include "Partner.h"

using namespace std;

public class Good {
private:
	string name;
	int count;
	Partner partner;
public:
	Good(string n, int c, Partner p);
	string getName();
	int getCount();
	Partner getPartner();
	void setName(string n);
	void setCount(int c);
	void setPartner(string s);
};