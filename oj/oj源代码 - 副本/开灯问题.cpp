#include<iostream>
 using namespace std;
 int main()
 {
 	int n,i,j,k,sum=0;
 	while(cin>>n>>k){
 	int a[n];
 	for(i=0;i<=n;i++)a[i]=-1;
 	for(i=1;i<=k;i++){
 		for(j=1;j<=n;j++){
 			if(j%i==0)a[j]=-a[j];
		 }
	 }for(i=1;i<=n;i++)if(a[i]==1)printf("%d\n",i);
}
}

#include<stdio.h>
int max(int n){
	int i,j,k,temp,sum=0;
	int s1=0;
	int e=n;
	for(i=0;n>0;i++){
	n/=10;
	sum++;}
	int a[sum-1];
	for(i=0;i<sum;i++){
		a[i]=e%10;
		e/=10;
	}temp=a[0];
	for(i=1;i<sum;i++)
		if(a[i]>=temp)temp=a[i];
	return temp;
}
int power(int a,int b){
	int i,s=1;
	for(i=0;i<b;i++)s=s*a;
	return s;
}
int fun(int n,int x){
	int i,j,k,sum=0;
	int s1=0;
	int e=n;
	for(i=0;n>0;i++){
	n/=10;
	sum++;}
	int a[sum-1];
	for(i=0;i<sum;i++){
		a[i]=e%10;
		e/=10;
	}for(i=0;i<sum;i++)
	 s1=s1+a[i]*power(x,i);
	 return s1;
}




int main()
{	int p,q,r,x1,x2,x3,y1,y2,y3,maxs;
	int n,i,j;
	scanf("%d %d %d",&p,&q,&r);
	y1=max(p);y2=max(q);y3=max(r);
	
	maxs=(y1>=y2)?y1:y2;
	maxs=(maxs>=y3)?maxs:y3;
	
	for(i=maxs+1;i<=16;i++){
		x1=fun(p,i);
		x2=fun(q,i);
		x3=fun(r,i);
		
		if(x1*x2==x3){
			printf("%d",i);break;
		}
	}
}
