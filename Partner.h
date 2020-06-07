#pragma once

#include <string>

using namespace std;

public class Partner {
private:
	string name;
public:
	Partner();
	Partner(string s);
	void setName(string s);
	string getName();
};