#include<iostream>
#include "Fake.h"
#include <string>
using namespace std;


int main() {
	char a;
	complex real;
	complex imaginary;


	real.SetNum1();
	real.SetNum2();
	cout << "imaginary parts of respected numbers :" << endl;
	imaginary.SetNum1();
	imaginary.SetNum2();

	cout << "Enter the operation you want to perform: ";
	cin >> a;
	switch (a)
	{
	case '+':
	{
		cout << "Addition: " << real.addition() << " + " << imaginary.addition() << "i" << endl;
		break;
	}
	case '-':
	{
		cout << "Subtraction: " << real.subtraction() << " - " << imaginary.subtraction() << "i" << endl;
		break;
	}
	case '*':
	{
		cout << real.multiplication() - imaginary.multiplication() << endl;
		break;
	}
	case '/':
	{
		cout << "the first expression you entered is of the form = " << real.GetNum1() << " + " << imaginary.GetNum2() << "i" << endl;
		cout << "the second expression you entered is of the form = " << real.GetNum2() << " + " << imaginary.GetNum2() << "i";
		break;
	}
	default:
		cout << "Wrong operation";
	}
return 0;
}