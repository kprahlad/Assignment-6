#include<iostream>
using namespace std;
int main()
{
	int a[10];
	for(int i=0;i<10;i++) cin>>a[i];
	for(int i=0;i<10;i++) cout<<a[i];
	cout<<endl;
	for(int *p=a,i=0;i<10;i++) cout<<*(p+i);
	return 1;
}
