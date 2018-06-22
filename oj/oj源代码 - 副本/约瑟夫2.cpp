#include<iostream>
using namespace std;
int main(){
	int n,m;//人数n和间隔数m；
	while(cin>>n>>m){
		int num=0,i=1,t=1,count;
		count=n;
		int a[n+1];
		for(int i=1;i<n+1;i++)
			a[i]=i;
		while(t){
			if(a[i]!=0)
				num++;
			if(num==m){
				num=0;
				cout<<a[i];
				count--;
				if(count)
					cout<<" ";
				a[i]=0;
			}
			if(i==n)
				i=1;
			else 
				i++;
			for(int j=1;j<n+1;j++){
				if(a[j]!=0){
					t=1;
					break;
				}
				else{
					t=0;
				}
			}
		}
		cout<<endl;
	}
	return 0;
	
} 
