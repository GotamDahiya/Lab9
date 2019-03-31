#include<stdio.h>
#include<math.h>
int cal(int m)
{
	for(int i=1;i<m;i++)
	{
		int c=0;
		for(int j=1;j<m;j++)
		{
			if(m==(i*j))
			{	
				int b=cal((i>j)?i:j);
				c++;
			}
			else break;
		}
		if(c>0)
			return m;
	}
}
int main(void)
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int c[n];
	for(int i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=a[i];j++)
		{
			for(int k=j;k<a[i];k++)
			{
				if(a[i]==(j*k))
					c[i]=cal((j>k)?j:k);
				else c[i]--;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		(a[i]>c[i])? printf("%d\n",c[i]):printf("%d\n",a[i]);
	}
	return 0;
}