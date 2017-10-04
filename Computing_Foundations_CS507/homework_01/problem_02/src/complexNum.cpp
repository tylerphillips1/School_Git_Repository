#include "complexNum.h"

template<class T>
complexNum<T>::complexNum()           : realNum(0),  imagNum(0);
complexNum<T>::complexNum(T n)        : realNum(n),  imagNum(0);
complexNum<T>::complexNum(T n1, T n2) : realNum(n1), imagNum(n2);


double complexNum<T>::get_real(){
	return realNum;
}	

double complexNum<T>::get_imag() {
	return imagNum;
}



