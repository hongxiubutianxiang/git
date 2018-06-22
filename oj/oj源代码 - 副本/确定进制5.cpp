#include<stdio.h>
#include<string.h>
/*求数据中最大一位的数*/ 
long fun(char *a,int b){
	int l=strlen(a);
	int i,sum=0;
	for(i=0;i<l;i++){
		if(a[i]-'0'>=b)return -1;
		sum*=b;
		sum+=a[i]-'0';
	}return sum;
}


int main()
{	long x1,x2,x3;
	int n,i,j,w;
	char p[100],q[100],r[100];
	while(scanf("%d",&w)!=EOF)
	while(w--){
	
	scanf("%s %s %s",p,q,r);
	
	
	
	



	
	for(i=2;i<=16;i++){
		x1=fun(p,i);
		x2=fun(q,i);
		x3=fun(r,i);
		if(x1==-1||x2==-1||x3==-1){
		printf("0\n");break;}
		if(x1*x2==x3){
			printf("%d",i);break;
	}if(i==17)printf("0");	}
	}return 0;}
