#include<stdio.h>
#include<string.h>
int an1[211];
char s1[211];
int an2[211];
char s2[211];
char s3[412];
/*������Ϊn_max��an1��an2���*/ 
int add(int n_max,int *an1,int *an2) {
	int maxs=0;
	for(int i=0; i<n_max; i++) {
		
		/*��λ���*/ 
		an1[i]+=an2[i];
		/*��10��1*/ 
		if(an1[i]>=10) {
			an1[i]-=10;
			an1[i+1]++;
		}/*��¼���λ*/ 
		if(an1[i])maxs=i;
	}
	return maxs;
}
int main() 
{
	while(gets(s1)&&s1[0]) {
		int i,j;
		/*��������*/ 
		memset(an1,0,sizeof(an1));
		memset(an2,0,sizeof(an2));
		memset(s3,0,sizeof(s3));
		memset(s2,0,sizeof(s2));
		/*��s1�洢���ַ�ת����an1*/ 
		int len1=strlen(s1);
		for(j=0,i=len1-1; i>=0; i--) {
			an1[j]=s1[i]-'0';
			an2[j++]=s1[i]-'0';
		}
		strcpy(s3,s1);
		strcat(s3,s1);
		bool key=true;
		for(i=1; i<len1; i++) {
			int nhigh=add(201,an1,an2);
			/*���ȳ�����*/ 
			if(nhigh>=len1) {
				key=false;
				break;
			}/*ת�����ַ���*/ 
			for(int k=0; k<len1; k++)s2[len1-1-k]=an1[k]+'0';
			s2[len1]=0;
			if(strstr(s3,s2)==NULL) {
				key=false;
				break;
			}
		}
		if(key)
			printf("%s is cyclis\n",s1);
		else printf("%s is not cyclic\n");
	}
	return 0;
}
