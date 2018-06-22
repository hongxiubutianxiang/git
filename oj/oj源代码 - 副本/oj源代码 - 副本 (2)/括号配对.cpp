#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int N;
	cin>>N;
	char str[81];
	while(N--){
		cin>>str;
		int a=0,b=0; 
		int l=strlen(str);
		for(int i=0;i<l;i++){
			if(str[i]=='{')
			a++;
			if(str[i]=='}')
			a--;
			if(str[i]=='(')
			b++;
			if(str[i]==')')
			b--;
		}
		if(a==0&&b==0)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
	return 0;
}
