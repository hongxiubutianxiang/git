#include<stdio.h>
#include<string.h> 
int diff(char *a,char *b)
{
	int i,j;
	char *ar[32]={"UTC","GMT","BST","IST","WET","WEST","CET","CEST","EET","EEST","MSK","MSD","AST","ADT","NST","NDT","EST","EDT","CST","CDT","MST","MDT","PST","PDT","HST","AKST","AKDT","AEST","AEDT","ACST","ACDT","AWST"};
	float t[32]={0,0,1,1,0,1,1,2,2,3,3,4,-4,-3,-3.5,-2.5,-5,-4,-6,-5,-7,-6,-8,-7,-10,-9,-8,10,11,9.5,10.5,8};
	for(i=0;strcmp(ar[i],a);i++);
	for(j=0;strcmp(ar[j],b);j++);
	return (int)((t[i]-t[j])*60);
} 
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char t[10];
		int h,m;
	    scanf("%s",t);
		switch(t[0])
		{
			case 'n':h=12;
					 m=0;
					 break;
			case 'm':h=0;
					 m=0;
					 break;
			default:sscanf(t,"%d:%d",&h,&m);
					h%=12;
					scanf("%s",t);
					if(t[0]=='p')h+=12;
		}
		char time1[8],time2[8];
		scanf("%s%s",time1,time2);
		int newt=h*60+m+diff(time2,time1);
		if(newt<0)
			newt+=1440;
		newt%=1440;
		switch(newt)
		{
			case 0:printf("midnight\n");break;
			case 720:printf("noon\n");break;
			default:h=newt/60;
					m=newt%60;
					if(h==0)
						printf("12:%d a.m.\n",m);
					else if(h<12)
						printf("%d:%d a.m.\n",h,m);
					else if(h==12)
						printf("12:%d p.m.\n",m);
					else
						printf("%d:%d p.m.\n",h%12,m);
		}
	}
	return 0;
}
