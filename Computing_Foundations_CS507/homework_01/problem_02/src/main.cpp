#include <iostream>
#include "complexNum.h"

using namespace std;

int main(void) {
	
	complexNum<double> a(2.0, 4.0);
	complexNum<double> b(5.0);

	complexNum<double> c;

	c = a + b;
	
	cout << "real: " << c.get_real() << " imaginary: " << c.get_imag() << endl;

	return 0;
}	
