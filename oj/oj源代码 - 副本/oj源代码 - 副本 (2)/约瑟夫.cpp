#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string a;
	string b;
	cin>>a>>b;
	string c=a+b;
	char arr[300];
	strcpy(arr,c.c_str());
	int len=strlen(arr);	
	int i;
	for(i=0;i<4;i++)
	cout<<arr[i]; 
}
