#ifndef __FRACTION_H__
#define __FRACTION_H__

class Fraction {
private:
	double num;
	double denom;

public:
	Fraction(double num, double denom) {
		// TODO constructor that initializes fields
		this->num = num;
		this->denom = denom;
	}

	double getNum() {
		// TODO get private numerator
		return this->num;
	}

	double getDenom() {
		// TODO get private denominator
		return this->denom;
	}

	double decimal() {
		// TODO compute decimal equivalent to fraction
		return this->num / this->denom;
	}

	Fraction multiply(Fraction f) {
		// TODO compute product of this and f
		Fraction result(f.num, f.denom);
		result.num *= this->num;
		result.denom *= this->denom;
		return result;
	}

	Fraction divide(Fraction f) {
		// TODO compute division of this and f
		Fraction result(this->num, this->denom);
		result.num *= f.denom;
		result.denom *= f.num;
		return result;
	}
};

#endif // __FRACTION_H__
