#include<iostream>;
#include<conio.h>;
#include "Complex.h"


using namespace std;

int main()
{
	Complex n1(1,4),n2(1,2);	
	if (n1 == n2)
		cout << " ==" << endl;
	else cout << " !=" << endl;
	n1.print();
	n2.print();
	system("pause");
	return 0;
}
