#include<iostream>
using namespace std;
int main()
{	int a[1000];
	int n,i,q,j;
	while(cin>>n){
		a[0]=1;
		if(n==0){
		cout<<"0"<<endl;}
		else{
			for(i=1;i<1000;i++)a[i]=0;
			for(i=0;i<n;i++){
				for(j=0;j<1000;j++)
				a[j]=a[j]*2;
			for(q=0;q<1000;q++){
				a[q+1]+=a[q]/10;
				a[q]%=10;
			}}a[0]-=1;
		}
		
		for(n=999;n>=0;n--)if(a[n]!=0)break;
		int e=n;
		for(i=e;i>=0;i--)cout<<a[i];
		cout<<endl;	}
} 
