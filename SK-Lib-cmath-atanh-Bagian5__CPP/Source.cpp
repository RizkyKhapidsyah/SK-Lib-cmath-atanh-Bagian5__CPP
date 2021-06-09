#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by Programiz 
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

#define PI 3.141592654
using namespace std;

int main() {
	int x = 1;
	double result;

	result = atanh(x);
	cout << "atanh(x) = " << result << " radian" << endl;

	// result in degrees
	cout << "atanh(x) = " << result * 180 / PI << " degree" << endl;

	_getch();
	return 0;
}