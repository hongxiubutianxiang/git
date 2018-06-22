#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[201],str2[201];
	int a[201],b[201],c[201];
	int k,i,j,first=0;
	int key=1;
	while(key){
	  	/*清空数组*/ 
	
       	cin>>str1>>str2;
        
        
		/*求各数组长度 */ 
		int len_a=strlen(str1)-1;
		int len_b=strlen(str2)-1;
		/*求最长的数*/ 
		
		if(len_a>=len_b)
			k=len_a;
		else
			 k=len_b;
		 
		/*倒序给数组赋值*/ 
		j=len_a;
		for(i=0;i<=len_a;i++)
		{
			a[i]=str1[j--]-'0';
			
		} 	
		j=len_b;
		for(i=0;i<=len_b;i++){
			b[i]=str2[j--]-'0';
			 } 
		
		for(i=0;i<k;i++)
		{c[i]=a[i]+b[i]+first;
		first=a[i]+b[i]+first;
		if(first>=10)first=1;else first=0;
		if(c[i]>=10)c[i]-=10;c[i+1]+=1;
	}c[k]=a[i]+b[i]+first;
	for(i=k;i>=0;i--)cout<<c[i];
		
		}
		
        
 } 
 
 
/*这个总该过了吧*/ 
/* 
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int k,i,j,first=0;
char str1[201],str2[201];
	int a[201]={0};
	int b[201]={0};
	
	while(1){
	 
	
         cin>>str1>>str2;
        
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
		 
		/*两数相加*/ 
		for(i=0;i<k;i++)
		a[i]=a[i]+b[i];
		for(i=0;i<k;i++)
		if(a[i]>=10){
			a[i]-=10;a[i+1]++;}
			a[k]=a[k]+b[k];
	for(i=k;i>=0;i--)cout<<a[i];
	
	}
}
        
  
  
  */ 
  /*学长的代码*/
  /* 
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char s1[300];
char s2[300];
int main()
{
	int a1[300]={0};
	int a2[300]={0};
	while(scanf("%s %s",s1,s2)!=EOF){
	int i;
	int j;
	for(j=0,i=strlen(s1)-1;i>=0;i--,j++)
	a1[j]=s1[i]-'0';
	for(j=0,i=strlen(s2)-1;i>=0;i--,j++)
	a2[j]=s2[i]-'0';
	int high=0;
	for(i=0;i<210;i++)
	{
		a1[i]=a1[i]+a2[i];
		if(a1[i]>=10)
		{
		a1[i]=a1[i]-10;
		a1[i+1]=a1[i+1]+1;
	    }
	    if(a1[i]!=0)
	    high=i;
    }
    printf("%d",a1[high]);
    for(i=high-1;i>=0;i--)
    printf("%d",a1[i]);
    cout<<endl;
   }
    return 0;
} */
