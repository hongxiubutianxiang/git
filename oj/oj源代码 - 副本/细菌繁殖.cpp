#include<iostream>
#include<cmath>
using namespace std;
int month[12]={31,28,31,30,31,30,31,31,30,31,30,32}; 

int main()
{
	int n,i,j,s;
	int a[1],b[1];
	cin>>n;
	while(n--){
		long sum=0;
		cin>>a[0]>>a[1]>>b[0]>>b[1]>>s;
		if(a[0]==b[0])sum=b[1]-a[1];
		else{
			for(i=a[0];i<b[0];i++)
			sum+=month[i];
			sum=sum-a[1]+b[1];
				
			
		} j=pow(s,sum);
		cout<<j<<endl;
	}
	
}
