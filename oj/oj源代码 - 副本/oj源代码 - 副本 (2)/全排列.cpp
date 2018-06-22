#include<iostream>
using namespace std;
/*打印数组*/ 
void printfperm(int a[],int n){
	int i;
	for(i=0;i<n;i++)cout<<a[i];
	cout<<"\n";
}
/*交换位置*/ 
void swap(int a[],int i,int j){
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
/*全排列*/ 
void perm(int a[],int p,int q){
	if(p==q)printfperm(a,q+1);
	else{
	int i;
	for(i=p;i<=q;i++){
		swap(a,p,i);
		perm(a,p+1,q);
		swap(a,p,i);//位置换回来 
		}
	}
}
int main()
{	int n;
	while(cin>>n){
	
int a[n-1];
	int i,sum=0;
	for(i=0;i<n;i++)
	a[i]=++sum;
	int k=n-1;
perm(a,0,k);
}return 0;
} 
