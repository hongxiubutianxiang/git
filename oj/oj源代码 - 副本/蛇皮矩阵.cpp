#include<stdio.h>
int fun(int,int) ;
int n,i,j;
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
		l++;
		while((x>u+1)&&p)
		{
			x--;
			ans++;
			p=fun(x,y);
		}
		u++;
	}
	printf("%d\n",ans);
	return 0;
}
int fun(int x,int y)
{int q=1;
	if((x==i)&&(j==y))
	  q=0;
	return q;
}

