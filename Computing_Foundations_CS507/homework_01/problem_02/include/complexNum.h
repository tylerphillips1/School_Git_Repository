#ifndef complexNum
#define complexNum

template<class T>
class complexNum<T> {
	private:
		T realNum;
		T imagNum;

	public:
		// Constructors and destructor
		complexNum();
		complexNum(T num);
		complexNum(T num1, T num2);
		~complexNum();
		
		// Opertor overloading
		complexNum operator + (complexNum complex2) {
			complexNum result;
			result.realNum = realNum + complex2.get_real();
			result.imagNum = imagNum + complex2.get_imag();
			return result;
		}

		// 
		T get_real();	
		T get_imag();
};

#endif
