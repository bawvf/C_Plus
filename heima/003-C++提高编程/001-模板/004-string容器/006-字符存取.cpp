#include <iostream>
using namespace std;
#include <string>

void test01() {
	string str = "hello";

	cout << str << endl;

	//1.通过[]访问单个字符
	for (int i = 0; i < str.size(); i++)
		cout << str[i] << " ";
	cout << endl;

	//2.通过at方式访问单个字符
	for (int i = 0; i < str.size(); i++)
		cout << str.at(i) << " ";
	cout << endl;

	//修改单个字符
	str[0] = 'x';
	str.at(0) = 'x';
	cout << str << endl;
}

int main() {

	test01();

	//test02();

	return 0;
}