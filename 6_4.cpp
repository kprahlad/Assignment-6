#include<iostream>
using namespace std;
int main()
{
	char a[10]="K.Prahlad";
	for(int i=0;i<10;i++) cout<<a[i];
	cout<<endl;
	for(char *p=a,i=0;i<10;i++) cout<<*(p+i);
	return 1;
}
