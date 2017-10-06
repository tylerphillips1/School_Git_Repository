#ifndef complex_Num
#define complex_Num

#include <iostream>
#include <cmath>

using namespace std;

template <class T>
class complexNum {
	private:
		T realNum;
		T imagNum;

	public:
		// Constructors and destructor
		complexNum()			   : realNum(0),    imagNum(0)    {};
		complexNum(T num)          : realNum(num),  imagNum(0)    {};
		complexNum(T num1, T num2) : realNum(num1), imagNum(num2) {};
		~complexNum() {};
		
		// Opertor overloading
		complexNum operator + (complexNum complex2) {
			complexNum result;
			result.realNum = realNum + complex2.get_real();
			result.imagNum = imagNum + complex2.get_imag();
			return result;
		}

		complexNum operator - (complexNum complex2) {
			complexNum result;
			result.realNum = realNum - complex2.get_real();
			result.imagNum = imagNum - complex2.get_imag();
			return result;
		}
		
		complexNum operator * (complexNum complex2) {
			complexNum result;
			result.realNum = realNum * complex2.get_real();
			result.imagNum = imagNum * complex2.get_imag();
			return result;
		}

		complexNum operator / (complexNum complex2) {
			complexNum result;
			result.realNum = realNum / complex2.get_real();
			result.imagNum = imagNum / complex2.get_imag();
			return result;
		}

		complexNum operator % (complexNum complex2) {
			complexNum result;
			result.realNum = realNum % complex2.get_real();
			result.imagNum = imagNum % complex2.get_imag();
			return result;
		}


		// Methods 
		T get_real() {
			return realNum;
		}
		T get_imag() {
			return imagNum;
		}
		double absVal() {
			return sqrt(realNum * realNum + imagNum * imagNum); 
		}

};

#endif
