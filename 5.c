#include<stdio.h>
#include<math.h>
int main(void)
{
	int c[26];
	int n,a=0;
	scanf("%d",&n);
	char str[n];
	scanf("%s",str);
	for(int i=0;i<26;i++)
	{
		char ch=i+97;
		for(int j=0;j<n;j++)
		{
			if(str[j]==ch)
				c[i]++;
		}
		if(c[i]==n)
			{a=1;break;}
	}
	if(a==1 && n>1)
		printf("Not possible\n");
	if(n==1) printf("Possible\n");
	if(n==0) printf("Not possible\n");
	if(n==2 && a==0) printf("Possible\n");
	if(n>=3 && n%2==1)
	{
		for(int i=0;i<26;i++)
		{
			if(c[i]==(n-1) && n==3) printf("Possible\n");
			if()
		}
	}
	return 0;
}