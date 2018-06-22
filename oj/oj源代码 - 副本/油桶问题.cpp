#include<iostream>
using namespace std;
int a[1000];
bool fun(int x,int y){
	if(x==0)return false;
	else if(a[x]==y)return true;
	else{
		if(fun(x-1,y-a[x]))return true;
		if(fun(x-1,y))return true;
	}return false;
		
} 
int main()
{	int i,n,m;
	while(cin>>n>>m){
	
	for(i=1;i<=n;i++)cin>>a[i];
	if(fun(n,m))cout<<"yes"<<endl;
	else cout<<"no"<<endl;
}
	
}
