#include<iostream>
using namespace std;
int length(char a[])
{
	int i=0;
	for(;a[i]!='\0';i++);
	return i;
}
char* copy(char a[],char b[])
{
	for(char *p=a,i=0;i<length(b);i++) *(p+i)=b[i];
	return a;
}
char* cat(char a[],char b[])
{
	char *p=a;
	int i=0,l=length(a);
	for(;i<length(b);i++) *(p+i+l)=b[i];
	*(p+i+l)='\0';
	return a;
}
int comp(char a[],char b[])
{
	int i=0;
	for(;i<length(a);i++) if(a[i]-b[i]) break;
	return a[i]-b[i];
}
int findchar(char a[],char s)
{
	int i=0;
	for(;i<length(a);i++) if(a[i]==s) break;
	if(i!=length(a)) return i+1;
	 else return 0; 
}
int findstring(char a[],char b[])
{
	int i=0,j=0,flag=1;
	for(;i<length(a)&&flag;i++)
	{
	 for(;j<length(b);j++) if(a[i+j]!=b[j]) break;
	 if(j==length(b)) flag=0;
	}
	if(i!=length(a)) return i;
	 else return 0; 
}
int main()
{
	char a[25]="Wotislife";
	char b[10]="K.Prahlad";
	cout<<length(a)<<" "<<length(b)<<endl;
	cout<<copy(a,b)<<endl;
	char c[15]=" Narasimhan";
	cout<<cat(a,c)<<endl;
	cout<<comp(a,b)<<endl;
	cout<<findchar(a,'Z')<<endl;
	cout<<findstring(a,b);
	return 1;
}
