#include<iostream>
using namespace std;
int dp[100][100];
struct student{
	string name;
	int score1;
	int score2;
	char n1;
	char n2;
	int bool_stu;
}a[10000];
int fun()

{
	long int n,t,x,i=0;//n为老虎只数，t为武松体力；
	while(cin>>n>>t){
		int a[n],count=0,sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=1;i<n;i++){
			int j=i-1,temp=a[i];
			while(a[j]>a[i]){
				a[j+1]=a[j];
				j--;
			}
				a[j+1]=temp;
		}
		
		for(int i=0;i<n;i++){
			sum+=a[i];
			if(sum>t)
				break;
			count++;
		}
	
	}
	return 0;
}
int main(){
	int m,n;
	while(cin>>m>>n){
		dp[0][0]=1;
		for(int j=1;j<=m;j++)
		dp[0][j]=0;
		for(int i=1;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i>j)
			dp[i][j]=dp[i-1][j];
			else
			dp[i][j]=dp[i-1][j]+dp[i][j-i];
		}
	}
	cout<<dp[n][m]<<endl;
	}
	return 0;
}

