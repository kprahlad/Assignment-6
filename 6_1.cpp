#include<iostream>
using namespace std;
int main()
{
	int a,*p1;
	char b,*p2;
	float c,*p3;
	double d,*p4;
	bool e,*p5;
	p1=&a;
	p2=&b;
	p3=&c;
	p4=&d;
	p5=&e;
	cout<<sizeof(a)<<sizeof(b)<<sizeof(c)<<sizeof(d)<<sizeof(e)<<sizeof(p1)<<sizeof(p2)<<sizeof(p3)<<sizeof(p4)<<sizeof(p5);
	return 1;
}
