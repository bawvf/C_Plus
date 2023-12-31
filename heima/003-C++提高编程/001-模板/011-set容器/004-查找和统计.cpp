#include <iostream>
using namespace std;

#include <set>

void printSet(set<int>& s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
		cout << *it << " ";
	cout << endl;
}

void test01() {
	//查找
	set<int>s1;

	//插入数据
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int>::iterator pos = s1.find(300);

	if (pos != s1.end())
		cout << "找到元素：" << *pos << endl;
	else 
		cout << "未找到元素" << endl;
}

//统计
void test02() {
	//查找
	set<int>s1;

	//插入数据
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	//统计30的个数
	int num = s1.count(30);
	cout << num << endl;
}

int main() {

	test01();

	test02();

	return 0;
}