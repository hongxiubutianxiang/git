#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;


struct Node{
	int mat[12][12];
};
Node a,b,c;

int fun()
{	int all;
	cin>>all;
	while(all--){
	Node c;
	int n,i,j,m,k,sum=0;
	cin>>n>>k;	
	int a[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
	;
	}
	


	
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
	if(i==j){

		sum%=9973;
	}}
	
	cout<<sum<<endl;
	
}
} 


const int mod=9973;
int n,k;
struct Matrix{
    int arr[12][12];
};
Matrix init,unit;
Matrix Mul(Matrix a,Matrix b){
    Matrix c;
    for(int i=0;i<n;i++)//ö�ٵ�һ���������
        for(int j=0;j<n;j++){//ö�ٵڶ����������
            c.arr[i][j]=0;
            for(int k=0;k<n;k++)//ö��Ԫ��
                c.arr[i][j]=(c.arr[i][j]+a.arr[i][k]*b.arr[k][j]%mod)%mod;
            c.arr[i][j]%=mod;
        }
    return c;
}
Matrix Pow(Matrix a,Matrix b,int x){
    while(x){
        if(x&1){ //�������������� 
            b=Mul(b,a);
        }
        x>>=1;//�������е����������,����һλ 
        a=Mul(a,a);
    }
    return b;
}
int main(){
    int t;
    while(cin>>t){
    while(t--){
        cin>>n>>k;
        int i,j;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++){
                scanf("%d",&init.arr[i][j]);
                unit.arr[i][j]=init.arr[i][j];
            }
        Matrix res=Pow(init,unit,k-1);
        int ans=0;
        for(int i=0;i<n;i++)
            ans=(ans+res.arr[i][i])%mod;
        printf("%d\n",ans%mod);
    }
   }
    return 0;
}
