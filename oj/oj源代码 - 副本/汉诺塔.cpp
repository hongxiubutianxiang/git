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
float toh(int x)          //��ŵ��ʵ�ֳ�����ҪӦ�ú����ĵݹ����
{
    float f;
    if(x==1) return f=1.0;
    else return f=2*toh (x-1)+1;     //�����ĵݹ����
}
main()                //������
{
   int  n;
   float times;                 //����Բ�̵ĸ������ʹ���
   printf("N:");
   scanf("%d",&n);
   times=toh(n);                 //�����ĵ���
   printf("%f\n",times);
}*/
