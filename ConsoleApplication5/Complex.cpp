#include "Complex.h"
#include<iostream>;
using namespace std;



Complex::Complex()
{
	real = 0;
	imag = 0;
};

Complex::Complex(int a, int b)
{
	real = a;
	imag = b;
};


bool Complex::operator==(const Complex & a)
{
	if(abs(real == a.real)&&abs(imag == a.imag))
		return true;
	else  return false;
};

void Complex::print()
{
	cout <<endl<< real << endl << imag;
	
};



