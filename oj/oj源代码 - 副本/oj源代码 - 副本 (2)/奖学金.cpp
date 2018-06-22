#include<iostream>
#include<cstring>
using namespace std;

struct student{
	string name;
	int score1;
	int score2;
	char n1;
	char n2;
	int bool_stu;
}a[10000];
int main()
{
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i].name>>a[i].score1>>a[i].score2>>a[i].n1>>a[i].n2>>a[i].bool_stu;
	int b[n];
	for(i=0;i<n;i++)b[i]=0;
	for(i=0;i<n;i++){
		if(a[i].score1>80&&a[i].bool_stu>=1)b[i]+=8000;
		if(a[i].score1>85&&a[i].score2>80)b[i]+=4000;
		if(a[i].score1>90)b[i]+=2000;
		if(a[i].score1>85&&a[i].n2=='Y')b[i]+=1000;
		if(a[i].score2>80&&a[i].n1=='Y')b[i]+=850;
	}
	int temp=b[0],e=0;
	for(i=0;i<n;i++)
		if(temp<b[i]){temp=b[i];e=i;}
	cout<<a[e].name<<endl;
	cout<<temp<<endl;
	
	int sum=0;for(i=0;i<n;i++)sum+=b[i];cout<<sum;
}
