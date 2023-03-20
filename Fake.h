#pragma once
#include <iostream>
using namespace std;

class complex
{
public:
	complex() {
		num1 = 0;
		num2 = 0;
	}
	complex(int n1, int n2)
	{
		num1 = n1;
		num2 = n2;
	}
	void SetNum1() {
		cout << "num1 = ";
		cin >> num1;
		return;
	}
	void SetNum2() {
		cout << "mum2 = ";
		cin >> num2;
		return;
	}
	float GetNum1() {
		return num1;
	}
	float GetNum2() {
		return num2;
	}
	float addition() {
		return num1 + num2;
	}
	float subtraction() {
		return num1 - num2;
	}
	float multiplication() {
		return num1 * num2;
	}

private:
	float num1;
	float num2;
};