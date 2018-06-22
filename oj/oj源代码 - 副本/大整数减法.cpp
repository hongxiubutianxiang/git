#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int k,i,j,first=0;
char str1[201],str2[201];
	int a[201]={0};
	int b[201]={0};
	
	while(cin>>str1>>str2){
	 
        /*求各数组长度 ,与最长的数*/ 
		int len_a=strlen(str1)-1;
		int len_b=strlen(str2)-1;
		int k=(len_a>=len_b)?len_a:len_b;
		 /*倒序给数组赋值*/ 
		j=len_a;
		for(i=0;i<=len_a;i++)
			a[i]=str1[j--]-'0';
		j=len_b;
		for(i=0;i<=len_b;i++) 
			b[i]=str2[j--]-'0';
		 /*两数相减*/ 
		for(i=0;i<k;i++)
		a[i]=a[i]-b[i];
		for(i=0;i<k;i++)
		if(a[i]<0){
			a[i]+=10;a[i+1]--;}
			a[k]=a[k]-b[k];
	int w=0; 
	for(i=k;i>=0;i--)
		{if(a[i]!=0)w=1;
		if(w==1)cout<<a[i];
		
		}if(w==0)cout<<"0";
cout<<"\n";
		}return 0; 
}
        
  
