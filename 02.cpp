#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

long double getValue(long double x) {
	return (1-exp(x))/x;
}

int main() {
	fstream FILE;
	FILE.open("oneminexp_ref.txt");

	/*
		READING
	*/

	FILE.close();

	return 0;
}