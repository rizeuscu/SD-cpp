#ifndef __COMPLEX_H
#define __COMPLEX_H

#include <iostream>

class Complex {
public:
    double re;
    double im;
 
    Complex(double real, double imag): re(real), im(imag) {};

    /* TODO: Overload + operator
    Complex operator+... {
    }*/

    /* TODO: Overload - operator
    Complex operator-...{
    }*/

    /* TODO: Overload * operator
    Complex operator*
    }*/

    /* TODO: Implement Copy constructor method */

    /* TODO: Implement Copy assignment method */

    /* TODO: Implement Destructor method */

    /* TODO: Overload << operator - Friend function declaration
    friend std::ofstream &operator<<...*/
};

/* TODO: Overload << operator - Friend function implementation 
		Complex number c should be printed as:
			Complex nr: Re(c.re)* Im(c.im)\n */

#endif
