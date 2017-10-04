#include <iostream>
#include "complexNum.h"

using namespace std;

int main(void) {
	
	complexNum<double> a(2, 4);
	complexNum<double> b(5);

	complexNum<double> c;

	c = a + b;
	
	cout << "real: " << c.get_real() << " imaginary: " << c.get_imag() << endl;

	return 0;
}	
