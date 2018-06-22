#include<iostream>
using namespace std;
int n;
int fun(int ans){
	int q=1;
	if(ans==n*n)q=0;
	return q;
}
int main()
{
	int i,j,k,ans=0;
	int u=1,d=0,r=2,l=1;
	cin>>n;
	int a[n][n];
	int q;
	do{q=fun(ans);
		while(u<=d&&q){
			a[u][l]=ans++;
			u++;
			q=fun(ans);}
			d++;
			
		while(l<=r&&q){
			a[u][l]=ans++;
			l++;
			q=fun(ans);}
			r++;
		while(u>=1&&q){
			a[u][l]=ans++;
			u--;
			q=fun(ans);}	
		
	}while(q);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
		cout<<a[i][j]<<" ";
		cout<<endl;
	
	
	}
	
	 
 } 
