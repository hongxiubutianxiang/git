#include<iostream>
using namespace std;
int n,i,j;
int fun(int x,int y)
{int q=1;
	if((x==i)&&(j==y))
	  q=0;
	return q;
}


int main()
{	
	int x,y,u,d,l,r,ans;
	while(cin>>n>>i>>j){
	
	x=1,y=0,u=1,d=n,l=1,r=n,ans=0;

	int p=fun(x,y);
	
	while(ans<n*n&&p)
	{
		while((y<r)&&p)
		{
			y++;
			ans++;
			p=fun(x,y);
		}
		r--;
		while((x<d)&&p)
		{
			x++;
			ans++;
			p=fun(x,y);
		}
		d--;
		while((y>l)&&p)
		{
			y--;
			ans++;
			p=fun(x,y);
		}
		l++;u++;
		while((x>u)&&p)
		{
			x--;
			ans++;
			p=fun(x,y);
		}
		
	}
	cout<<ans<<endl;}
	return 0;

}

