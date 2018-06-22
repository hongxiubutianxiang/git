#include<stdio.h>
int fun(int,int) ;
int n,i,j;
int p;
int main()
{
	int x,y,u,d,l,r,ans;
	scanf("%d %d %d",&n,&i,&j);
	ans=0;
	d=n;
	r=n;
	u=1;
	l=1;
	x=1;
	y=0;
	p=1;
	while(ans<n*n&&p)
	{
		while((y<r)&&p)
		{
			y++;
			ans++;
			fun(x,y);
		}
		r--;
		while((x<d)&&p)
		{
			x++;
			ans++;
			fun(x,y);
		}
		d--;
		while((y>l)&&p)
		{
			y--;
			ans++;
			fun(x,y);
		}
		l++;
		while((x>u+1)&&p)
		{
			x--;
			ans++;
			fun(x,y);
		}
		u++;
	}
	printf("%d\n",ans);
	return 0;
}
int fun(int x,int y)
{
	if((x==i)&&(j==y))
	  p=0;
	return p;
}
