#include<stdio.h>  
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
  
        int da,db,dc;//10½øÖÆµÄa¡¢b  
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

