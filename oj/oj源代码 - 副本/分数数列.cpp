#include<iostream>
using namespace std;
int fun1(int n){
	int f=0;
	if(n==1)f=1;
	if(n==2)f=2;
	if(n>2)f=f+fun1(n-1);
	return f;
}
int main()
{	int n,i,s=0;
	cin>>n;
	int k=fun1(n);
	cout<<k<<endl;
}
