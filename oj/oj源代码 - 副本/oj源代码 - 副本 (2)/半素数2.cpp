#include<iostream>
#include<cmath>
using namespace std;
int isprime(int n){
	for(int i=2;i<=sqrt(n);i++)
	if(n%i==0)
	return 0;
	return 1;
}
int main(){
	int n;
	while(cin>>n){
	   if(isprime(n))
	   cout<<"No"<<endl;
	   else{
	   	int m=0;
		int a; 
	   	for(int i=2;i<=sqrt(n);i++){
	   		if(n%i==0){
	   			m++;
	   			a=i;
			}	
		}
		if(m>2)
		cout<<"No"<<endl;
		else{
			if(isprime(a)&&isprime(n/a))
			cout<<"Yes"<<endl;
			else
			cout<<"No"<<endl;
		}
	   }
	}
	return 0;
} 
