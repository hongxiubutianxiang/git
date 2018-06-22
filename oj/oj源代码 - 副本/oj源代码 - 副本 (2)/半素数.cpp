#include<iostream>
#include<cmath>
using namespace std;
int fun(int n){
	int i;
	for(i=2;i<=n-1;i++){
		if(n%i==0)break;
	}if(i<n)return 0;//·ÇËØÊý 
	else return 1;//ËØÊý 
}
int main()
{
	int x,y,n,i,j;
	while(cin>>n){
	 
	int k=sqrt(n);
	int temp=fun(n);
	if(temp==1)cout<<"No"<<endl;
	else{int m=0,e;
	 
	for(i=2;i<=k;i++){
	if(n%i==0){m++;e=i;
	}
}
		if(m>=2)cout<<"No"<<endl;
	else{	
			x=n/e;y=e;
				if(fun(x)==1&&fun(y)==1)cout<<"Yes"<<endl; 
			
			else cout<<"No"<<endl;
	}
}}}
