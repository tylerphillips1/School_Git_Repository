#include <iostream>
#include <cmath>
#include "exponential.h"

using namespace std;

// Problem 1.1; exponential using limit method
void limit_method(const double numExp){

	print_Problem_Header(1.1);
	
	double n = 1e308;	
	double d = numExp / n;

	cout << "d = " << d << endl;

	double e = pow(1.0 + d, n);

	cout << "exp(" << numExp << ") = " << e << endl;
	
	end_Problem();
}

// Problem 1.2; exponential using summation method
void sum_method(const double numExp){

	print_Problem_Header(1.2);
	
	double sum = 1 + numExp;
	double newTerm = 1;
	double tol = 1e-8;
	int n = 2;

	while(newTerm > tol) {
		newTerm = power(numExp, n) / factorial(n);
		sum += newTerm;
		n++;
	}
	
	cout << "exp(" << numExp << ") = " << sum << endl;
	cout << "calculated using " << n << " terms" << endl; 
}

double factorial(const int k) {
	int prod = 1;
	for(int i = 1; i <= k; i++) {
		prod = i * prod;
	}
	return prod;
}

double power(const double base, const int exponent){
	double result = 1;
	for(int i = 1; i <= exponent; i++) {
		result = result * base;
	}
	return result;
}

void print_Problem_Header(double probNum){
	cout << "*****************************" << endl;
	cout << "        Problem " << probNum << endl;
	cout << "*****************************" << endl;
	
}

void end_Problem(){
	cout << "\n" << endl;
}
