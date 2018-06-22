#include<iostream>
using namespace std;
int a[1001][1001]; 
int fun(int x,int y,int n){
	int left,right,temp;
	if(x==n){
	temp=a[x][y];
	return temp;}
	left=fun(x+1,y,n);
	right=fun(x+1,y+1,n);
	temp=left<right?a[x][y]+left:a[x][y]+right;
	return temp;
}
int main()
{
	
	int i,j,n;
	while(cin>>n){
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
		cin>>a[i][j];
	}
	cout<<fun(1,1,n)<<endl;	
}}
