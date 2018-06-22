#include<iostream>
using namespace std; 
unsigned long long fun(int n){  
unsigned long long t;
   if(n==1)
   		t=1;  
	else  t=2*fun(n-1)+1;
      
    return t;  
}  
int main()  
{	int n;  unsigned long long sum;
    while(cin>>n){

	sum=fun(n);
    cout<<sum<<endl;  
}
    return 0;  
}  /*
#include<iostream>
using namespace std; 
float fun(int n){  
	float t;
   if(n==1)
   		t=1;  
	else  t=2*fun(n-1)+1;
      
    return t;  
}   
int main()  
{	int n;  
    while(cin>>n){
	float sum;
	sum=fun(n);
    cout<<sum<<endl;  
}
    return 0;  
}  */
/*
#include <stdio.h>
float toh(int x)          //汉诺塔实现程序，主要应用函数的递归调用
{
    float f;
    if(x==1) return f=1.0;
    else return f=2*toh (x-1)+1;     //函数的递归调用
}
main()                //主函数
{
   int  n;
   float times;                 //定义圆盘的个数，和次数
   printf("N:");
   scanf("%d",&n);
   times=toh(n);                 //函数的调用
   printf("%f\n",times);
}*/
