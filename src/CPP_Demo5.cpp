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
		cout << "Z 类被构造" << endl;
	}
	void Z_Method() {
		cout << "Z 方法" << endl;
	}
};
class A: virtual public Z {
public:
	A() {
		cout << "A 类被构造" << endl;
	}
	void A_Method1() {
		cout << "A 类A_Method1" << endl;
	}
	void A_Method2() {
		cout << "A 类A_Method2" << endl;
	}
};

class B: virtual public Z {
public:
	B() {
		cout << "B 类被构造" << endl;
	}
	void B_Method1() {
		cout << "B 类B_Method1" << endl;
	}
	void B_Method2() {
		cout << "B 类A_Method2" << endl;
	}
};

class C: public B, public A {
public:
	C() {
		cout << " C类被构造" << endl;
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
