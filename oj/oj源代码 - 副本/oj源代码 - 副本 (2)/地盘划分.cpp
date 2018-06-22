#include<iostream>
using namespace std;
int count(int a,int b){
	if(a==b)return 1;
	else if(a%b==0)return a/b;
	else return count(b,a%b)+a/b;
}
int main()
{
	int a,b;
	while(cin>>a>>b){

	cout<<count(a,b); 
}	}
