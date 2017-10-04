#include <iostream>
#include <cmath>
#include "exponential.h"

using namespace std;

int main(void) {
	
	double numExp = 1.0;

	cout << "\nNOTE: exp(" << numExp << ") = " << exp(numExp) << " using cmath library \n" << endl;
	
	limit_method(numExp);
	sum_method(numExp);

	return 0;
}	
