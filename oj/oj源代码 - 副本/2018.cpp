#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
unsigned long long int a,b,c,d;
unsigned long long int fun(unsigned long long int x,unsigned long long int y);
int main()
{
	while(cin>>a>>b>>c>>d){
		unsigned long long int f1=fun(a,b);
		unsigned long long int f2=fun(c,d);
		unsigned long long int t=0,m=0,n=0;
		m=b/2018-(a-1)/2018;
		t+=m*(d-c+1);
		n=b/1009-(a-1)/1009-m;
		t+=n*f2;
		unsigned long long int x=0,y=0;
		x=d/2018-(c-1)/2018;
		t+=x*(b-a+1);
		y=d/1009-(c-1)/1009-x;
		t+=y*f1;
		unsigned long long int awm;
		awm=t-(n*x+m*y+x*m);
		cout<<awm<<endl;
	}
}
unsigned long long int fun(unsigned long long int x,unsigned long long int y){
	{
		if(x%2!=0&&y%2!=0)return (y-x)/2;
		else if(x%2==0&&y%2==0)return (y-x)/2+1;
		else return (y-x+1)/2;
	}
}
