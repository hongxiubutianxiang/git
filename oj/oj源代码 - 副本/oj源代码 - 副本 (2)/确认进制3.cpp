#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a,b,s;
	while(cin>>a>>b){
		int length_a,length_b;
		int x1,x2,sum,first,k;
		length_a=a.size()-1;
		length_b=b.size()-1;
		if(length_a>length_b)k=length_a;
			else k=length_b;
		if(length_a>length_b)s=a;else s=b;
		
		
		
		for(first=0;k>=0;k--,length_a--,length_b--)	
	{if((a[length_a]-'0')>0)
		x1=a[length_a]-'0';
	else x1=0;
	if((b[length_b]-'0')>0)
		x2=a[length_b]-'0';
	else x2=0;
		sum=x1+x2+first;
		first=x1+x2+first;
		if(sum>=10){sum-=10;first=1;}
		s[k]+=sum+'0';
	}if(first)cout<<"1";
	cout<<s;}
	cout<<endl;
}
