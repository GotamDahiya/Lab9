#include<stdio.h>
#include<math.h>
int main(void)
{
	int n,m,x;
	scanf("%d %d %d",&n,&m,&x);
	int a[n];
	int b[m];
	int c1[n],c2[m];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n;i++)
	{
		int s=0;
		for(int j=0;j<m;j++)
		{
			if((a[i]+b[j])<x)
				s++;
			else break;
		}
	c1[i]=s;
	}
	for(int i=0;i<m;i++)
	{
		int s=0;
		for(int j=0;j<n;j++)
		{
			if((b[i]+a[j])<x)
				s++;
		}
		c2[i]=s;
	}
	int max1=0,max2=0;
	for(int i=0;i<n;i++)
	{
		if(c1[i]>max1)
			max1=c1[i];
	}
	for(int i=0;i<m;i++)
	{
		if(c2[i]>max2)
			max2=c2[i];
	}
	(max1>max2)? printf("%d\n",max1):printf("%d\n",max2);
	return 0;

}