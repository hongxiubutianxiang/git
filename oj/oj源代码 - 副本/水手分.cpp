#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int m,n,l;
	double k,x,y[20];
	cin>>n>>m;
	l=n+1;
	k=n-m-1;
	y[n+1]=k;
	while(l>1){
		l--;
		y[l]=(y[l+1]*n+m)/(n-1);
		if(y[l]!=floor(y[l])){
			k=k+n+1;
			y[n+1]=k;		}
	}
	 x=n*y[1]+m;
	 cout<<x<<endl;
	 cout<<y[n+1];
}
