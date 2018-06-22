#include<iostream>
#include<string.h>
using namespace std;

char s[100][100];
void c(char *s1,char *s2,int m);
void set(char *s1,char *s2,char *s3){
;
}
int main()
{
	int n;
	while(cin>>n){
    for(int awm=0;awm<n;awm++){
		
		int t,max=0,min=100,temp;
		cin>>t;
		for(int i=0;i<t;i++)
		{
		cin>>s[i];
		int len=strlen(s[i]);
		if(len<min){
			temp=i;
			min=len;
		}
	}
	for(int i=0;i<min;i++){
	char s1[100]={'\0'};
	char s2[100]={'\0'}; 
	char s3[100]={'\0'};
	c(s[temp],s1,i);
	for(int j=1;j<min-i+1;j++){
		strncpy(s2,s1,j);
		int w=0;
		for(int q=j-1;q>=0;q--){
			s3[w]=s2[q];
			w++;
		}bool exit=true;
		for(int f=0;f<t;f++){
			if(strstr(s[f],s2)==NULL&&strstr(s[f],s3)==NULL){
				exit=false;
				break;
			}
		}if(exit&&max<j){
			max=j;
		}
	}}
	cout<<max<<endl;
	            }
}}
void c(char *s1,char *s2,int m){
	int len1=strlen(s1);
	int j=0;
	for(int i=m;i<len1;i++)
		s2[j++]=s1[i];
}
