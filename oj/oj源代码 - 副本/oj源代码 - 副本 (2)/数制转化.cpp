#include<iostream>
#include<string.h>
using namespace std;
long fun1(char *x,int b)
{
	int sum=0,i;
	int length=strlen(x);
	for(i=0;i<length;i++)
	{
		if(x[i]-'0'>=b)
		return -1;
		sum*=b;
		if(x[i]>='0'&&x[i]<='9')
            x[i]=x[i]-'0';
        else
        	x[i]=x[i]-'A'+10;
		sum+=x[i];
	}
	return sum;
}
int main()
{
	int n,b;
	char p[8];
	long pa;
	int num;
	while(cin>>n){
	while(n--)
	{	cin>>p>>num;
		cout<<fun1(p,num)<<endl;
	} 
   }
	return 0;	
}


#include<stdio.h>
#include<string.h>
char str[50];
int start[50],ans[50],res[50];
int oldBase,newBase;
void change(){
    int i,len=strlen(str);
    start[0]=len;
    for(i=1;i<=len;i++){
        if(str[i-1]>='0'&&str[i-1]<='9')
            start[i]=str[i-1]-'0';
        else
        	start[i]=str[i-1]-'A'+10;
    } 
}
void solve(){
    memset(res,0,sizeof(res));
    int y,i,j;
    while(start[0]>=1){
        y=0;
        i=1;
        ans[0]=start[0];
        while(i<=start[0]){
            y=y*oldBase+start[i];
            ans[i++]=y/newBase;
            y%=newBase; 
        }
        res[++res[0]]=y;
        i=1;
        while((i<=ans[0])&&(ans[i]==0))i++;
        memset(start,0,sizeof(start));
        for(j=i;j<=ans[0];j++)
            start[++start[0]]=ans[j]; 
        memset(ans,0,sizeof(ans));
    } 
    for(i=1;i<=res[0];i++){
    	if(res[i]<10)
    		res[i]+='0';
    	else
    		res[i]+='A'-10;
    }
}
void output(){
    int i;
    for(i = res[0];i >= 1;--i)
        printf("%c",res[i]);
    printf("\n"); 
}
int main(){
	while(scanf("%d",&oldBase)){
		scanf("%d",&newBase);
		scanf("%s",str);
		if(oldBase==0&&newBase==0&&strcmp(str,"0")==0)
			break;
    		change();
    		solve();
    		output();
   	 }
    return 0;
}

