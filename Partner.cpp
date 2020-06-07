#include "Partner.h"

Partner::Partner() {
	setName("");
}
Partner::Partner(string s) {
	setName(s);
}
void Partner::setName(string s) {
	name = s;
}
string Partner::getName() {
	return name;
}