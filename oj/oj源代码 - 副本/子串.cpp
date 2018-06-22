#include <iostream>
#include <string.h>
using namespace std;
char ch[100][101];
unsigned int sublen(char* pch,unsigned int len,int m)
{
    char sub[101],rev[101];
    memset(sub,0,101*sizeof(char));
    memset(rev,0,101*sizeof(char));
    unsigned int sublength = len;
    while (sublength)
    {
        for (int i=0;sublength<=len-i;i++)
        {
            strncpy(sub,pch+i,sublength);
            sub[sublength] = '\0';
            strcpy(rev,sub);
            _strrev(rev);
            rev[sublength] = '\0';
            bool flag = true;
            for (int j=0;j<m;j++)
            {
                if (!(strstr(ch[j],sub)||strstr(ch[j],rev)))
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                return sublength;
            }
        }
        sublength--;    
    }
    return sublength;
}

int main()
{
    memset(ch,0,100*101*sizeof(char));
    int n,m;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        
        cin>>m;
        unsigned int len = 101;
        int index = 0;
        char min[101];
        memset(min,0,101*sizeof(char));
        for (int j=0;j<m;j++)
        {
            cin>>ch[j];
            if (len > strlen(ch[j]))
            {
                strcpy(min,ch[j]);
                len = strlen(min);
                index = j;
            }
        }
        strcpy(ch[index],ch[m-1]);
        int sub// sublen(min,len,m-1)
		//(char* pch,int m)
		m=m-1;

    char sub[101],rev[101];
    memset(sub,0,101*sizeof(char));
    memset(rev,0,101*sizeof(char));
    unsigned int sublength = len;
    while (sublength)
    {
        for (int i=0;sublength<=len-i;i++)
        {
            strncpy(sub,min+i,sublength);
            sub[sublength] = '\0';
            strcpy(rev,sub);
            _strrev(rev);
            rev[sublength] = '\0';
            bool flag = true;
            for (int j=0;j<m;j++)
            {
                if (!(strstr(ch[j],sub)||strstr(ch[j],rev)))
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                return sublength;
            }
        }
        sublength--;    
    }



        cout<<sub<<endl;
    }

    return 0;
}
