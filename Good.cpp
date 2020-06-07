#include "Good.h"

Good::Good(string n, int c, Partner p) {
	name = n;
	count = c;
	partner = p;
}

string Good::getName() {
	return name;
}

int Good::getCount() {
	return count;
}

void Good::setName(string n){
	name = n;
}

void Good::setCount(int c) {
	count = c;
}

Partner Good::getPartner() {
	return partner;
}

void Good::setPartner(string s) {
	partner.setName(s);
}