#include<iostream>
using namespace std; 
int fun(int n){
	int result;
	int i;
	for(i=2;i<n;i++)
		if(n%i==0){result=1;break;}//resultΪ1�������� 
		if(i==n)result=0;//resultΪ0������ 
	return result;
 } 
 int fun2(int n){
	int result;
	int i;
	for(i=2;i<n;i++)
		if(n%i==0){result=1;break;}//resultΪ1�������� 
		if(i==n)result=0;//resultΪ0������ 
	return result;
 } 
 
 
 
int main()
{
	int a,b,s;
	while(cin>>s){
	int i=1;
	int j=1;
	int sum=0; 
	while((i==1)||(j==1)){
		a=2+sum;
		b=s-a;
		i=fun(a);
		j=fun(b);
		sum++;
	}
	cout<<a<<"+"<<b;
	cout<<endl;
}
}
