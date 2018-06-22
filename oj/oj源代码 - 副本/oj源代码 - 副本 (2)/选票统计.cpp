#include<iostream> 
using namespace std;
int main()
{
	int n,i=0,j,e;
	int a[1000];
	for(i=0;;i++){
		cin>>a[i];
		if(a[i]==-1){e=i;break;}
		
	}
	
	for(i=0;i<e-1;i++){
		for(j=0;j<e-1-i;j++){
			if(a[j+1]<a[j]){
				int temp;
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	

	int t=0;
	for(i=0;i<e;i++)
	
	{	t++;
		if(a[i+1]!=a[i]){
		cout<<a[i]<<" "<<t<<endl;t=0;}
	}
	
		
}
