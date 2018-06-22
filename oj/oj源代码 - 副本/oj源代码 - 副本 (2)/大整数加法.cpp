#include<iostream>
#include<string>
using namespace std;
fun(int a,int b){

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
}        if(carry)cout<<"1";
        cout<<ans<<endl;
    }
    return 0;
}
