#include<iostream>
#include<string.h>
using namespace std;
char str1[105],str2[105];     //用于保存键盘输入的两个待加大整数
    int num1[105],num2[105];
    int max;
int jiafa(char *str1,char *str2){
	    
    
    {
        memset(str1,0,sizeof(str1));
        memset(str2,0,sizeof(str2));
        memset(num1,0,sizeof(num1));
        memset(num2,0,sizeof(num2));//将这些数组清零
        scanf("%s",str1);
        scanf("%s",str2);
        int len1,len2,i,j;
        len1=strlen(str1);
        len2=strlen(str2);
        j=0;
        max=len1>len2?len1:len2;
        for(i=len1-1; i>=0; i--)
            num1[j++]=str1[i]-'0';
        /*字符串反转并且转换为数字保存到数组里面*/
        j=0;
        for(i=len2-1; i>=0; i--)
            num2[j++]=str2[i]-'0';
            
            
            
        for(i=0; i<max; i++)
        {
            num2[i]+=num1[i];//相加
            if(num2[i]>=10)
            {
                num2[i]-=10;
                num2[i+1]+=1;//产生进位
            }
        }
        if(num2[max]) printf("%d",num2[max]);
}
int main()
{	cin>>str1>>str2;	
	jiafa(str1,str2);
//如果最高位产生进位
        for(i=max-1; i>=0; i--)
            printf("%d",num2[i]);
        printf("\n");
    }
    return 0;
}
/*#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a,b;
    string ans;
    while(cin>>a>>b)
    {
        int carry;
        int i,j,k;
        int add1,add2,sum;
        i=a.size()-1;
        j=b.size()-1;
        k=i>j?i:j;
        if(i>j) ans=a; else ans=b;//这句是多加的，使ans有合适的存储空间
     for(carry=0;k>=0;i--,j--,k--)
        {
            add1=i<0?0:a[i]-'0';
            add2=j<0?0:b[j]-'0';
            sum=add2+add1+carry>=10?add1+add2+carry-10:add1+add2+carry;
            carry=add1+add2+carry>=10?1:0;
            ans[k]=sum+'0';
        }
        if(carry)cout<<"1";
        cout<<ans;
    }
    return 0;
}








#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,len_a,len_b,a1,b1,max,temp;
	int num1[201],num2[201],c[201];
	char str1[200],str2[200];
	while(1){
	  memset(str1,0,sizeof(str1));
        memset(str1,0,sizeof(str2));
        memset(num1,0,sizeof(num1));
        memset(num2,0,sizeof(num2));
   
    	scanf("%s",str1);
        scanf("%s",str2);
        int len1,len2,i,j;
        len1=strlen(str1);
        len2=strlen(str2);
        j=0;
        int max=len1>len2?len1:len2;
        for(i=len1-1; i>=0; i--)
            num1[j++]=str1[i]-'0';
        j=0;
        for(i=len2-1; i>=0; i--)
            num2[j++]=str2[i]-'0';
	
	
	
		
	for(i=0;i<max;i++)
	{c[i]=(num1[i]+num2[i]+temp)>=10?num1[i]+num2[i]+temp-10:num1[i]+num2[i]+temp;
	temp=(num1[i]+num2[i]+temp)>=10?1:0; 
		
		
	}

}




if(c[max]) cout<<c[max];
	for(i=max-1;i>=0;i--)cout<<c[i];
 } 
 */
 
 
 
 
 
 
 
 
 
 
 








