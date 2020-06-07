#include "Implementation.h"
#include <fstream>
#include <iostream>

using namespace std;

void Implementation::ImplementGood(int count, char znak) {
	fstream fout;
	fout.open("ReportM.txt", ios::app);
	fout << "\n***\n";
	fout.close();
}