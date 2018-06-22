#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,m,i=0,x,j;
	cin>>m>>n;
	int a[n];
	for(j=0;;j++){
		for(x=0;x<=j;x++){
			a[i]=pow(2,x)*pow(3,j-x);
			
			if(a[i]>m)break;
			i++;
		}
	}
	
	
	for(int j=0;;j++){
			for(x=0;x<=j;x++){
				a[i]=pow(2,x)*pow(3,j-x);
				i++;
			}
			if(a[i]>n)
				break;
		}
	
	int temp,e=x;
	for(i=0;i<x-1;i++){
		for(j=0;j<x-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	
	
	int b[x],s=0;
	for(i=0;i<x;i++){
		if(a[i]!=a[i+1])b[s++]=a[i];
	}
	cout<<b[m];
	return 0;
}
