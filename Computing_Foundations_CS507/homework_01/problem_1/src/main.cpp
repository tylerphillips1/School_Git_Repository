#include <iostream>
#include "exponential.h"

using namespace std;

int main(void) {
	
	double numExp = 1.0;

	// Two different methods used to calculate
	// the exponenetial of numExp variable.
	limit_method(numExp);
	sum_method(numExp);

	return 0;
}	
