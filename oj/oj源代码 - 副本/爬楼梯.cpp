#include <stdio.h>  
#include <stdlib.h>  
int f(int n)  
{  
    long s;  
    /*ÌØÀý*/ 
    if(n==1)  return s=1;  
    if(n==2)  return s=2;  
    /*µÝ¹é*/ 
   	if(n>2) return s=f(n-1)+f(n-2);  
    
}  

int main()  
{  
    int n,t;  
	while(scanf("%d",&n)==1){
	t=f(n);  
    printf("%d",t);  }
    return 0;  
  
}
