#include <iostream>
using namespace std;

class Base {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son : public Base {
public:
	int m_D;
};

void test01() {	
	cout << sizeof(Son) << endl;
}

int main() {

	return 0;
}