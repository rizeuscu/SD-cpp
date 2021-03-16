#include <iostream>
#include <fstream>

int main() {

	/*
	* Use out as std::cout
	* ex : out << var1 << " " << var2 << std::endl;
	*/

#ifdef DEBUG
	std::ostream& out = std::cout;
#else
	std::ofstream file;
	file.open("Out/Lab1/task1.out");
	std::ostream& out = file;
#endif

	/*
	 * TODO Create array of pair, print the first field of each and the sum of all second fields
	 */
	float sum = 0;
	std::pair<int, float> v[10];
	for (int i = 0; i < 10; ++i) {
		v[i].first = i;
		v[i].second = v[i].first * 2.5;
	}
	for (auto x : v) {
		out << x.first << " ";
		sum += x.second;
	}
	out << sum;
	file.close();
	return 0;
}
