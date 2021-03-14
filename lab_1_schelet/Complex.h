#ifndef __COMPLEX_H__
#define __COMPLEX_H__

#include <math.h>

class Complex {
private:
	double re;
	double im;

public:
	Complex(double re, double im) {
		// TODO create constructor and initialize fields
	}

	double getRe() {
		// TODO create getter for re
	}

	double getIm() {
		// TODO create getter for imd
	}

	double modulus() {
		// TODO compute module of this
	}

	Complex add(Complex c) {
		// TODO compute sum of this and c
	}

	Complex multiply(Complex c) {
		// TODO compute product of this and c
	}
};

#endif // __COMPLEX_H__
