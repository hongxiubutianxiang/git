#include<stdio.h>
#include<string.h>
long fun(char *x,int b)
{
	int sum=0,i;
	int length=strlen(x);
	for(i=0;i<length;i++)
	{
		if(x[i]-'0'>=b)
		return -1;
		sum*=b;
		sum+=x[i]-'0';
	}
	return sum;
}
int main()
{
	int n,b;
	char p[8],q[8],r[8];
	long pa,qa,ra;
	while(scanf("%d",&n)!=EOF){
	while(n--)
	{
		scanf("%s%s%s",p,q,r);
		for(b=2;b<=16;b++)
		{
			pa=fun(p,b);
			qa=fun(q,b);
			ra=fun(r,b);
			if(pa==-1||qa==-1||ra==-1)
			continue;
			if(pa*qa==ra)
			{
			printf("%d\n",b);
			break;
		    }
		}
	if(b==17)
	printf("0\n");
	} 
   }
	return 0;	
}
