#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n){
	int i,j,row,col,m=1,flag=1;
	int a[n][n];
	int num1=(n*n/2+n*n%2);
	int num2=n*n+1;
	for(i=0;m<=num1;i++){
		row=i;
		while(row>=0){
			col=i-row;
			if(flag){
			a[row][col]=m;
			a[n-1-row][n-1-col]=num2-m;
			}else{
				a[col][row]=m;
				a[n-1-col][n-1-row]=num2-m;
				
			}m++; 
			row--;
		}flag=!flag;
	}
	for(i=0;i<n;i++)
	{	for(j=n-1;j>=1;j--)cout<<a[i][j]<<" ";
		cout<<a[i][0];
		cout<<endl;
	} 
}}
