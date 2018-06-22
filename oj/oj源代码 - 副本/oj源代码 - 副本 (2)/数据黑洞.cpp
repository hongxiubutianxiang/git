#include<iostream>
using namespace std;
int main()
{	int n,s1,sum;
	while(cin>>n)
{
	int i,j,temp,k,t,s[4];
	s1=n;
	if(s1==6174)sum=0; 
	if(s1!=6174)sum=0;{
	while(s1!=6174){
	/*求每个数字的各项*/ 
	for(i=0;i<4;i++)
		{s[i]=n%10;
		n=n/10;}
	/*冒泡排序改变顺序*/ 
	for(i=0;i<4;i++){
		for(j=1;j<4-i;j++){
			if(s[j]>s[j-1]){
				temp=s[j-1];
				s[j-1]=s[j];
				s[j]=temp;
			}
		}
	} 
	/*求每次相减后的数*/ 
	k=1000*s[0]+100*s[1]+10*s[2]+s[3];
	t=1000*s[3]+100*s[2]+10*s[1]+s[0];
	s1=k-t;
	sum++;
	n=s1;
	cout<<k<<"-"<<t<<"="<<k-t<<endl;}
}

	cout<<sum<<endl;
}
} 
