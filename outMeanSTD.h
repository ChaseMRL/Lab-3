#ifndef OUTMEANSTD_H
#define OUTMEANSTD_H

class outMeanSTD  //making  the class//
{
public:
	//constructor and destructor//
	outMeanSTD();
	~outMeanSTD();

	//get and set functions//
	void seta(float a_);
	float geta();

	void setb(float b_);
	float getb();

	void setc(float c_);
	float getc();

	void setd(float d_);
	float getd();
	
	//establishing methods for calculating mean and standard deviation//
	float func(int a, int b, int c, int d);

	float calculateSD(int a, int b, int c, int d);

private:

	//four variables being used for the calculators
	float a;
	float b;
	float c;
	float d;

};


#endif//!CYLINDER_H