# include<iostream>
using namespace std;
int main()
{
	int length,i,t,j;
	cin>>length>>t;
	int a[10000]={0};
	int begin,end;
	for(j=0;j<t;j++)
	{	scanf("%d %d",&begin,&end);
		for(i=begin;i<=end;i++)a[i]=1;
	}int sum=0;
	for(i=0;i<=length;i++)
 	if(a[i]==0)sum++;
 	printf("%d",sum); 
 
 } 
 
