#include<iostream>
#include<cstring>
using namespace std;	

int fun(char* land1,char* land2){
const char *land[32]={"UTC","GMT","BST","IST","WET","WEST","CET","CEST",
	"EET","EEST","MSK","MSD","AST","ADT","NST","NDT",
	"EST","EDT","CST","CDT","MST","MDT","PST","PDT",
	"HST","ASKT","AKDT","AEST","AEDT","ACST","ACDT","AWST"};
	float time[32]={0,0,1,1,0,1,1,2,2,3,3,4,-4,-3,-3.5,-2.5,-5,
	-4,-6,-5,-7,-6,-8,-7,-10,-9,-8,10,11,9.5,10.5,8};
	int i,j;
	for(i=0;strcmp(land[i],land1);i++)
	for(j=0;strcmp(land[j],land2);j++)
	return ((time[i]-time[j])*60);
}
int main()
{
	int n;
	cin>>n;
	while(n--){
		
	}
}
