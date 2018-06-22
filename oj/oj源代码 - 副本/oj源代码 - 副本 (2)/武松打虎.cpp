#include<iostream>
using namespace std;
int main()
{
	long i,j,k,m,n;
	while(cin>>m>>n){
	
	int a[m],temp;
	for(i=0;i<m;i++)cin>>a[i];
	for(i=0;i<m-1;i++)
	{
	for(j=0;j<m-i-1;j++) 
	if(a[j]>a[j+1]) 
	{temp=a[j];
	a[j]=a[j+1]; 
	a[j+1]=temp; 
} }
	int s=0,re=0;
	for(i=0;i<m;i++){
		n-=a[i];
		if(n<0)break;
		s++;
	}cout<<s<<endl;
	
}

}
