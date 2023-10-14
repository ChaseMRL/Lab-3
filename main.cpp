/*
	Chase Deiter
	C++ Fall 2023
	Due: 10/13/2023
	Lab 3 User and File I/O

	 Write an interactive C++ program that computes and outputs the mean and
population standard deviation of a set of four integers that are inputted by a file called
“inMeanStd.dat” and the user (should handle both). Although the individual values are
integers, the results are floating-point values. Be sure to use proper formatting and
appropriate comments in your code. Provide appropriate prompts to the user. The
output should be to the screen for the user inputted values and to a file called
“outMeanStd.dat”. The programs output should be labeled clearly and formatted
neatly. You must calculate the mean and standard deviation in separate methods within
a class.
*/

#include "outMeanSTD.h"
#include<iostream>
#include <fstream>

using namespace std;

int main()
{
	int a, b, c, d;

//setting values for the variables, calling on the set functions in header file//
	outMeanSTD s;

	s.seta(3);

	s.setb(6);

	s.setc(7);

	s.setd(8);

	//including the numbers from the data file//
	ifstream inFile("outMeanSTD.dat");
	inFile >> a >> b >> c >> d;

	//outputting the mean and standard deviatoin calculations of the four set values// 
	cout << "The mean of the numbers " << a << ", " << b << ", " << c <<
		", and " << d << " is " << s.func(a, b, c, d);
	cout << " and the standard deviation is " << s.calculateSD(a, b, c, d) << endl;

	//inputting four values and calculating mean and standard deviation of those//
	cout << "Put in four integers of your own" << endl;
	cin >> a >> b >> c >> d;

	cout << "The mean of " << a << ", " << b << ", " << c <<
		", and " << d << " is " << s.func(a, b, c, d);
	cout << " and the standard deviation is " << s.calculateSD(a, b, c, d) << endl;

	return 0;
}
