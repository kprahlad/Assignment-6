#include<iostream>
using namespace std;
int main()
{
	char a[10]="K.Prahlad";
	for(char *p=a,i=0;i<10;i++) cout<<(p+i)<<endl;
	return 1;
}
