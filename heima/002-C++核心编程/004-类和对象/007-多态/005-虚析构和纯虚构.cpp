#include <iostream>
using namespace std;

class Animal {
public:
	Animal() {
		cout << "Animal构造函数调用" << endl;
	}

	//纯虚函数
	virtual void speak() = 0;

	// 利用虚析构可以解决父类指针释放子类对象时不干净的问题
	virtual ~Animal() {
		cout << "Animal析构函数调用" << endl;
	}
};

class Cat : public Animal {
public:
	Cat(string name) {
		m_Name = new string(name);
	}

	virtual void speak() {
		cout << *m_Name << "小猫在说话" << endl;
	}

	~Cat() {
		if (m_Name != NULL) {
			cout << "Cat析构函数调用" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}

	string *m_Name;
};

void test01() {
	Animal* animal = new Cat("Tom");
	animal->speak();
	//父类指针在析构时候不会调用子类中析构函数，导致子类如果有堆区属性， 出现内存谁漏

	delete animal;
}

int main() {

	test01();

	return 0;
}