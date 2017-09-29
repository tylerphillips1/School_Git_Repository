#include <iostream>
#include <cmath>
using namespace std;

void limit_method(const double x, const double n);
void sum_method(const double x, const double n);


int main(void) {
	
	double x = 1.0;
	double n = 1e308;

	limit_method(x, n);

		return 0;
}	

void limit_method(const double x, const double n){
	
	double d = x/n;

	cout << "d = " << d << endl;

	double e = pow(1.0 + d, n);

	cout << "e = " << e << endl;
}


void sum_method(const double x, const double n){



}
