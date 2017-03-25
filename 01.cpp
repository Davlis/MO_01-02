#include <iostream>

using std::cout;

template<typename T>
short int getPrecision(T& number){
	short int sum=0;
	T EPSILON;
	while(true){
		number /= 2;
		++sum;
		if(number + 1 == 1){
			number = EPSILON;
			--sum;
			break;
		}
		EPSILON = number;
	}
	return sum;
}

int main() {
	float  _FLOAT  = 1.0;
	double _DOUBLE = 1.0;

	cout << "FLAOT HAS GOT " << getPrecision(_FLOAT) << "BITS OF MANTISSA"  << "\n";
	cout << "EPSYLON FOR FLOAT = "<<_FLOAT << "\n";

	cout << "\n";

	cout << "DOUBLE HAS GOT " << getPrecision(_DOUBLE) << "BITS OF MANTISSA"  << "\n";
	cout << "EPSYLON FOR DOUBLE = "<<_DOUBLE << "\n";

	return 0;
}