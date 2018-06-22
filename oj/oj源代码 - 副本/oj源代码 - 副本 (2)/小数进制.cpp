#include<iostream>
#include<cstring>
using namespace std;
char s[3000];
int ans[3000];
int main()
{	int n,i,k,j;
	cin>>s;
	int t=0;
	memset(ans,0,sizeof(ans));
	int len=strlen(s);
	for(i=len-1;i>1;i++){
		int temp=s[i]-'0';
		j=0;
		k=0;
		while(j<t||temp){
			temp=10*temp+ans[j++];
			ans[k++]=temp/8;
			temp%=8;
		}t=k;
	}
	cout<<s<<"["<<8<<"]=0.";
	for(i=0;i<t;i++)
	cout<<ans[i];
	cout<<"[10]";
		
} 
