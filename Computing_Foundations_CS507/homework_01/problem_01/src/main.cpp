#include <iostream>
#include <cmath>
#include "exponential.h"

using namespace std;

int main(void) {
	
	// Numeber to find the exponential of
	double numExp = 1.0;
	
	limit_method(numExp);
	sum_method(numExp);

	return 0;
}	
