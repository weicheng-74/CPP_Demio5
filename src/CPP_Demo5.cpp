//============================================================================
// Name        : CPP_Demo5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Z {
public:
	Z() {
		cout << "Z �౻����" << endl;
	}
	void Z_Method() {
		cout << "Z ����" << endl;
	}
};
class A: virtual public Z {
public:
	A() {
		cout << "A �౻����" << endl;
	}
	void A_Method1() {
		cout << "A ��A_Method1" << endl;
	}
	void A_Method2() {
		cout << "A ��A_Method2" << endl;
	}
};

class B: virtual public Z {
public:
	B() {
		cout << "B �౻����" << endl;
	}
	void B_Method1() {
		cout << "B ��B_Method1" << endl;
	}
	void B_Method2() {
		cout << "B ��A_Method2" << endl;
	}
};

class C: public B, public A {
public:
	C() {
		cout << " C�౻����" << endl;
	}
void	C_Method1() {
		cout << "C C_Method1" << endl;
	}

void C_Method2() {
		cout << "C C_Method2" << endl;
	}
};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	C c;
	return 0;
}
