#include<iostream>
using namespace std;
int main()
{
	int n,s;
	while(cin>>n){s=0;
	while(n!=1){
		if(n%2==0)n=n/2;
		if(n%2!=0) n=(3*n+1)/2;
		s++;
	}cout<<s<<endl;
} }


