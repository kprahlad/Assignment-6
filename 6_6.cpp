#include<iostream>
using namespace std;
int main()
{
	char a[10]="K.Prahlad";
	for(char *p=a,i=8;i>=0;i--) cout<<(p+i)<<endl;
	return 1;
}
