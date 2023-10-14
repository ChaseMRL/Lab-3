#include"outMeanSTD.h"
#include<cmath>

//setting values for the variables//
outMeanSTD::outMeanSTD()
{
	a = 0;
	b = 0;
	c = 0;
	d = 0;
}

//standard destructor procedure//
outMeanSTD::~outMeanSTD()
{
}

//setting the variables in the set functions equal to the 4 variables//
void outMeanSTD::seta(float a_)
{
	a = a_;
}

void outMeanSTD::setb(float b_)
{
	b = b_;
}

void outMeanSTD::setc(float c_)
{
	c = c_;
}

void outMeanSTD::setd(float d_)
{
	d = d_;
}

//formula for mean//
float outMeanSTD::func(int a, int b, int c, int d)
{
	return(float((a+b+c+d) / 4.0));
}

//formula for standard deviation//
float outMeanSTD::calculateSD(int a, int b, int c, int d)
{
	float data;
	data = a + b + c + d;
	float mean;
	mean = float(data / 4);

	return sqrt((pow((a - mean), 2) + pow((b - mean), 2) + pow((c - mean), 2) + pow((d - mean), 2)) / 4);
}
