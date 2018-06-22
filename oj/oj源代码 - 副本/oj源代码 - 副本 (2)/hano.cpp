#include<iostream>
using namespace std;
int main()
{	int a[502];
	int n,i,q,j;
	while(cin>>n){
		a[0]=1;
		if(n==0){
		cout<<"0"<<endl;}
		else{
			for(i=1;i<500;i++)a[i]=0;
			for(i=0;i<n;i++){
				for(j=0;j<500;j++)
				a[j]=a[j]*2;
			for(q=0;q<500;q++){
				a[q+1]+=a[q]/10;
				a[q]%=10;
			}}a[0]-=1;
		}for(n=499;n>=0;n--)cout<<a[n];
		cout<<endl;	}
} 
