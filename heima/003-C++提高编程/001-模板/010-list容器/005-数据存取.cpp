#include <iostream>
using namespace std;

#include <list>

void printList(const list<int>& L) {
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
		cout << *it << " ";
	cout << endl;
}

void test01() {
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	cout << "第一个元素为：" << L1.front() << endl;
	cout << "最后一个元素为：" << L1.back() << endl;
}

int main() {

	test01();

	//test02();

	return 0;
}