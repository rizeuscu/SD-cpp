#ifndef __FRACTION_H
#define __FRACTION_H

class Fraction {
public:
	double num;
	double denom;

	Fraction(double n, double d): num(n), denom(d) {};

    /* TODO: Overload * operator
    Fraction operator*...{
    }*/

	/* TODO: Overload / operator 
	Fraction operator/...{ 
	}*/

	/* TODO: Get actual value of this fraction
	double getValue...{
	}*/

	/* TODO: Overload << operator - Friend function declaration
    friend std::ofstream &operator<<...*/
};

/* TODO: Overload << operator - Friend function implementation 
		Fraction f should be printed as:
			f.num/f.denom\n*/

#endif