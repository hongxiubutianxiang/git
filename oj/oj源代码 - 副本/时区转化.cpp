#include<iostream>
#include<cstring>
using namespace std;	
int fun(char* land1,char* land2){
	int i,j;
	char ar[32]={"UTC","GMT","BST","IST","WET","WEST","CET","CEST","EET","EEST","MSK","MSD","AST","ADT","NST","NDT","EST","EDT","CST","CDT","MST","MDT","PST","PDT","HST","AKST","AKDT","AEST","AEDT","ACST","ACDT","AWST"};
	float t[32]={0,0,1,1,0,1,1,2,2,3,3,4,-4,-3,-3.5,-2.5,-5,-4,-6,-5,-7,-6,-8,-7,-10,-9,-8,10,11,9.5,10.5,8};
	for(i=0;strcmp(ar[i],land1);i++);
	for(j=0;strcmp(ar[j],land2);j++);
	return (int)((t[i]-t[j])*60);
}
int main()
{
	int n,i,j,k;
	while(cin>>n){
	while(n--){
	char t[10];
			int h,m;
			cin>>t;
			if(t[0]=='n'){
				h=12;
				m=0;
			}
			else if(t[0]=='m'){
				h=0;
				m=0;
			}
			else{
			sscanf(t,"%d:%d",&h,&m);
						h%=12;
						cin>>t;
						if(t[0]=='p')
						h+=12; 
			} 

			char time1[8],time2[8];
			cin>>time1>>time2;
			 int newt=h*60+m+fun(time2,time1);
			 if(newt<0)
			 	newt+=1440;
			 	newt%=1440;
			if(newt==0)cout<<"midnight"<<endl;
			else if(newt==720)cout<<"noon"<<endl;
			else{
				h=newt/60;
						m=newt%60;
					if(h==0)cout<<"12:"<<m<<" "<<"a.m."<<endl;
					else if(h<12)cout<<h<<":"<<m<<" "<<"a.m."<<endl;
					else if(h==12)cout<<"12:"<<m<<" "<<"p.m."<<endl;
					else cout<<h%12<<":"<<m<<" "<<"p.m."<<endl;	
				
			}
	
		}

}
	}

