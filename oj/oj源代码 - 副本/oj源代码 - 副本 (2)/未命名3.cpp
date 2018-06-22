
#include<iostream>
using namespace std;
int main()
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
		cout<<count<<endl;
	}
	return 0;
}
