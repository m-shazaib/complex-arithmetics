#pragma once
#include <iostream>
using namespace std;

class complex
{
public:
	//default constructor
	complex(float n1=0, float n2=0,float n3=0, float n4=0)
	{
		real1 = n1;
		real2 = n3;
		imag1 = n2;
		imag2 = n4;
	}

	//setting the data members to value through user inputs(setters)
	void SetReal1() {
		cout << "a in a+bi = ";
		cin >> real1;
		return;
	}
	void SetImag1() {
		cout << "b in a+bi = ";
		cin >> imag1;
		return;
	}
	void SetReal2() {
		cout << "c in c+di = ";
		cin >> real2;
		return;
	}
	void SetImag2() {
		cout << "d in c+di = ";
		cin >> imag2;
		return;
	}

	//to access  the private data members (getters)
	float GetReal1() {
		return real1;
	}
	float GetReal2() {
		return real2;
	}
	float GetImag1() {
		return imag1;
	}
	float GetImag2() {
		return imag2;
	}

	//displaying the complex number expressions as given by user
	void display() {
		cout <<"expression 1 : "<< real1 << "+" << imag1 << "i" << endl;
		cout <<"expression 2 : "<< real2 << "+" << imag2 << "i" << endl;
		return;
	}

	//to perform the operation on the complex numbers
	char ToPerform() {
		cout << "enter the operation to perform on the complex numbers" << endl;
		cout << "1. addition = +" << endl;
		cout << "2. subtraction = -" << endl;
		cout << "3. multiplication = *" << endl;
		cin >> operation;
		return operation;
	}

	//arithmetic operations 
	float realaddition() {
		return real1+real2 ;
	}
	float imaginaryaddition() {
		return imag1 + imag2;
	}
	float realsubtraction() {
		return real1 - real2;
	}
	float imaginarysubtraction() {
		return imag1 - imag2;
	}
	void multiplication() {
		cout<<(real1*real2)+(imag1*imag2)<<"+"<<(real1*imag2)+(real2*imag1)<<"i"<<endl;
		return;
	}

private:
	float real1;//a
	float imag1;//b
	float real2;//c
	float imag2;//d
	char operation; //for storing operation to perform

};

