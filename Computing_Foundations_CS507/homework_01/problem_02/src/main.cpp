#include <iostream>
#include <cmath>
#include "complexNum.h"

void printNum(complexNum<double> a) {
	cout << "(" << a.get_real() << ", " << a.get_imag() << "i)";
}

double abs(complexNum<double> a) {
	return sqrt(a.get_real() * a.get_real() + a.get_imag() * a.get_imag());
}


int main(void) {

	complexNum<double> a(2.0, 4.0);
	complexNum<double> b(5.0);

	complexNum<double> c, d, e, f, g;

	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;
	g = a;

	double val = abs(c); 

	cout << "\n*********************************" << endl;
	cout << "            Problem 2            " << endl;
	cout << "*********************************" << endl;

	printNum(a); cout  << " + "; printNum(b); cout << " = "; printNum(c); cout << endl;	
	printNum(a); cout  << " - "; printNum(b); cout << " = "; printNum(d); cout << endl;	
	printNum(a); cout  << " * "; printNum(b); cout << " = "; printNum(e); cout << endl;	
	printNum(a); cout  << " / "; printNum(b); cout << " = "; printNum(f); cout << endl;	
	printNum(g); cout << endl;	
	cout << "|"; printNum(c); cout << "| = " << val << "\n\n";  	
	return 0;
}	


