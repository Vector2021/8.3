#include<iostream>
#include<set>

using namespace std;

void test01()
{
	set<int> s1;
	s1.insert(5);
	s1.insert(7);
	s1.insert(9);
	s1.insert(1);
	s1.insert(3);
	s1.insert(4);
	s1.insert(6);

	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it;
	}
	cout << endl;
}


void test02()
{
	set<int> s1;
	s1.insert(5);
	s1.insert(7);
	s1.insert(9);
	s1.insert(1);
	s1.insert(3);
	s1.insert(4);
	s1.insert(6);

	set<int> :: iterator ret = s1.find(41);
	if (ret == s1.end())
		cout << "Î´ÕÒµ½" << endl;
	else
		cout << *ret << endl;
}

int main()
{
	test02();
	//test01();
	return 0;
}