#include<iostream>
#include<cstring>
using namespace std;
int main()
{	
	int i,j,k,p,t,w,result;
	string num;
	while(cin>>num){
	int a[300],b[300];	
	char c[300];
	//数组清零 
	for(i=0;i<300;i++){
		a[i]=0; b[i]=0;
	}
	//string转为char,再换为int型数组 
	strcpy(c,num.c_str());
	int len=strlen(c);
	for(i=0;i<len;i++)
	a[i]=c[i]-'0';
	int t=0;
	//双倍长度string，准备找子串 
		string sub=num;
		num=num+num;
		//大整数乘法 
	/*for(j=1;j<=len;){
		for(p=0;p<len;p++)
		b[p]=a[p];//给定数组 
		for(k=0;k<len;k++)
		a[k]*=j;j++;
		for(i=len-1;i>0;i--){
			b[i-1]+=b[i]/10;
			b[i]=b[i]%10;	
		}for(i=0;i<len;i++)
		cout<<b[i]; 
		cout<<endl;
		//检查是否为双倍长度字符串的子串 
	}*/
	for(j=0;j<len;j++){

		for(k=0;k<len;k++)b[k]+=a[k];
		for(t=len-1;t>0;t--){
			b[k-1]+=b[k]/10;
			b[k]%=10;
		}for(w=0;w<len;w++)cout<<b[w];
		cout<<endl;
	}
	}	
} 

 
