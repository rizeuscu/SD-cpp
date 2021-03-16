#ifndef __COMPLEX_H__
#define __COMPLEX_H__

#include <math.h>

class Complex {
private:
	double re;
	double im;

public:
	Complex* ptr = this;
	Complex(double re, double im) {
		// TODO create constructor and initialize fields
		(*ptr).re = re;
		(*ptr).im = im;
	}

	double getRe() {
		// TODO create getter for re
		return (*ptr).re;
	}

	double getIm() {
		// TODO create getter for im
		return (*ptr).im;
	}

	double modulus() {
		// TODO compute module of this
		return sqrt((*ptr).re * (*ptr).re + (*ptr).im * (*ptr).im);
	}

	Complex add(Complex c) {
		// TODO compute sum of this and c
		Complex result(c.re, c.im);
		result.re += (*ptr).re;
		result.im += (*ptr).im;
		return result;
	}

	Complex multiply(Complex c) {
		// TODO compute product of this and c
		Complex result(c.re, c.im);
		Complex resultCopy = result;
		result.re = result.re * this->re - result.im * this->im;
		result.im = resultCopy.re * this->im + resultCopy.im * this->re;
		return result;
	}
};

#endif // __COMPLEX_H__
