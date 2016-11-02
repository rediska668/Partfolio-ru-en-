#pragma once


class Complex
{
public:
	Complex();
	Complex(int ,int );
	bool operator==(const Complex& );
	void print();
private:
	int imag;
	int real;
};

