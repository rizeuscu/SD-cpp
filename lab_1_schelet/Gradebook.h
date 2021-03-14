#ifndef __GRADEBOOK_H__
#define __GRADEBOOK_H__

class Gradebook {
private:
	double *grades;
	int capacity; // max number of grades
	int count;    // current number of grades

public:
	Gradebook(int capacity) {
		// TODO initialize grades, capacity and count
		this->grades = new double[capacity];
		this->capacity = capacity;
		this->count = 0;
	}

	~Gradebook() {
		// TODO free memory
		delete[] this->grades;
	}

	void addGrade(double grade) {
		// TODO add new grade to grades array (if it reaches its capacity return)
		if (this->count == this->capacity)
			return;
		this->grades[this->count] = grade;
		this->count++;
	}

	double average() {
		// TODO compute average of the grades that have been added
		double sum = 0;
		for (int i = 0; i < this->count; ++i) {
			sum += this->grades[i];
		}
		return sum / this->count;
	}
};

#endif // __GRADEBOOK_H__
