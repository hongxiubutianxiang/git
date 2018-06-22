#include<iostream>
using namespace std;
int power(int a, int b) {  
    int s = 1;  
    while (b > 0) {  
        if (b % 2 == 1) {  
            s = s % 10000;  
            a = a % 10000;  
            s = s * a;  
        }  
        a = a % 10000;  
        a = a * a;  
        b = b >> 1;  
    }  
    return s%10000;  
}  

int main()
{
	int i,j,a,b,n;
	while(cin>>n){
	
	while(n--)
	{
	cin>>a>>b;
	int s=0;
	for(i=1;i<=a;i++)
		(s+=power(i,b))%=10000;
		
	cout<<s<<endl;
}}
} 
