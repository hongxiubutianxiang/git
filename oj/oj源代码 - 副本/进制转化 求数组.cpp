#include<iostream>
#include<cstring>
using namespace std;  
int fun(int n)  
{  
    int max=0;  
    while(n)  
    {  
        int k=n%10;   
        if(k>max)  
            max=k;  
        n/=10;  
    }  
    return max;  
}  int fun2(int n){
	int result;
	int i;
	for(i=2;i<n;i++)
		if(n%i==0){result=1;break;}//result为1，非素数 
		if(i==n)result=0;//result为0，素数 
	return result;
 } 
 
 int wps()
{
	int k,i,j,first=0;
char str1[201],str2[201];
	int a[201]={0};
	int b[201]={0};
	
	while(cin>>str1>>str2){
	 
        /*求各数组长度 ,与最长的数*/ 
		int len_a=strlen(str1)-1;
		int len_b=strlen(str2)-1;
		int k=(len_a>=len_b)?len_a:len_b;
		 /*倒序给数组赋值*/ 
		j=len_a;
		for(i=0;i<=len_a;i++)
			a[i]=str1[j--]-'0';
		j=len_b;
		for(i=0;i<=len_b;i++) 
			b[i]=str2[j--]-'0';
		 /*两数相减*/ 
		for(i=0;i<k;i++)
		a[i]=a[i]-b[i];
		for(i=0;i<k;i++)
		if(a[i]<0){
			a[i]+=10;a[i+1]--;}
			a[k]=a[k]-b[k];
	int w=0; 
	for(i=k;i>=0;i--)
		{if(a[i]!=0)w=1;
		if(w==1)cout<<a[i];
		
		}if(w==0)cout<<"0";
cout<<"\n";
		}return 0; 
}
        
  
  
int ic_xy(int n,int p)  
{  
    int k=1,r;  
    int sum=0;  
    while(n)  
    {  
        r=n%10;  
        n/=10;  
        sum+=r*k;  
        k*=p;  
    }  
    return sum;  
}  
  
int main()  
{  
    int t;  
    scanf("%d",&t);  
    while(t--)  
    {  
        int a,b,c;  
        scanf("%d%d%d",&a,&b,&c);  
        int amax,bmax;  
        amax=fun(a);  
        bmax=fun(b);  
  
        if(bmax>amax)  
            amax=bmax;  
        bmax=fun(c);  
        if(bmax>amax)  
            amax=bmax;  
  
        int da,db,dc;//10进制的a、b  
        for(amax++;amax<=16;amax++)  
        {  
            da=ic_xy(a,amax);  
            db=ic_xy(b,amax);  
            dc=ic_xy(c,amax);  
  
            if(da*db==dc)  
                break;  
        }  
        if(amax>16)  
            amax=0;  
        printf("%d\n",amax);  
    }  
    return 0;  
}  

