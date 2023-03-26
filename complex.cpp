#include<iostream>
#include "Fake.h"
#include <string>
using namespace std;


int main() {
	
	complex expression;
	expression.SetReal1();
	expression.SetImag1();
	expression.SetReal2();
	expression.SetImag2();
	expression.display();
	
	switch (expression.ToPerform()) {
	case '+':
		cout<<expression.realaddition()<<" + "<<expression.imaginaryaddition()<<"i" << endl;
		break;
	case '-':
		cout<<expression.realsubtraction() <<" - "<<expression.imaginarysubtraction()<<"i" << endl;
		break;
	case '*':
		expression.multiplication();
		break;
	default:
		cout << "Invalid input" << endl;
		break;
	}

return 0;
}