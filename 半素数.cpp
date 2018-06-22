#include<iostream>
#include<cmath>
using namespace std;
int isSemiPrime(int a)
{
    int t=sqrt(a),i;
    for( i=2;i<=t;i++)
      if(a%i==0)
        break;
    if(i>t)
        return 1;
    else
        return 0;
}
int main()
{
   int n;
   while(cin>>n)
   {
       int t=sqrt(n),i,a,m=0;
       if(isSemiPrime(n))
        cout<<"No"<<endl;
       else
        {for(i=2;i<=t;i++)
            if(n%i==0)
            {
               m++;
               a=i;
            }
            if(m>1)
                cout<<"No"<<endl;
            else
                if(isSemiPrime(a)&&isSemiPrime(n/a))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }

   }

}