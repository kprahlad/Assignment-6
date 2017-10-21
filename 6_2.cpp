#include<iostream>
using namespace std;
int main()
{
	int a=10,b=20,*p;
	p=&a;
	b=*p;
	cout<<a<<b<<*p;
	a=2;
	b=3;
	cout<<a<<b<<*p;
	p=&b;
	cout<<a<<b<<*p;
	return 1;
}
