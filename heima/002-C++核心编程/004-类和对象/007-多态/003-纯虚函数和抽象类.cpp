#include <iostream>
using namespace std;

class Base {
public:

	//纯虚函数
	//只要有一个纯虚函数，这个类称为抽象类
	//抽象类特点:
	//1.无法实例化对象
	// 2、抽象类的子类 必须要重写父类中的纯虚函数，否则也属于抽象类

	virtual void func() = 0;
};

void test01() {
	

}

int main() {


	return 0;
}