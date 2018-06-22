#include<iostream>
#include<cmath>
using namespace std;
int isprime(int n){
	for(int i=2;i<=sqrt(n);i++)
	if(n%i==0)
	return 0;
	return 1;
}
int fun1()
{
	int x,y,n,i,j;
	while(cin>>n){
	 
	int k=sqrt(n);
	int temp=fun1();
	if(temp==1)cout<<"No"<<endl;
	else{int m=0,e;
	 
	for(i=2;i<=k;i++){
	if(n%i==0){m++;e=i;
	}
}
		if(m>=2)cout<<"No"<<endl;
	else{	
			x=n/e;y=e;
				if(fun1()==1&&fun1()==1)cout<<"Yes"<<endl; 
			
			else cout<<"No"<<endl;
	}
}}}
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
