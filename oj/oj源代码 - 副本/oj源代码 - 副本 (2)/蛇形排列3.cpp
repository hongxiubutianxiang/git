#include<iostream>
using namespace  std;
int i,j;
int fun(int x,int y){
	int p;
	if(x==i&&y==j)p=0;
	else p=1;
	return p;
}
int main()
{
	int n,p;
	cin>>n>>i>>j;
	int u=1,d=n,r=1,l=n;
	int x=1,y=0,t=1;
	do{p=fun(x,y);
		while(x<=l&&p){
			x++;
			t++;
			if(x==l){
				u++;
				t--;
			}p=fun(x,y);
		}
		while(y<=d&&p){
			y++;
			t++;
			if(y==d){
				l--;
				t--;
			}p=fun(x,y);
		}
		while(x>=r&&p){
			x--;
			t++;
			if(x==r){
				t--;
				d--;
			}p=fun(x,y);
		}
		while(y>=u&&p){
			y--;
			t++;
			if(y==u){
				r--;
				t--;						
			}p=fun(x,y);
		}
	} while(x==i&&y==j);
	cout<<t;
	return 0;
} 
