#include<stdio.h>
#include<math.h>
int main(void)
{
	int q;
	scanf("%d",&q);
	int arr[q];
	int c[q];
	for(int i=0;i<q;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<q;i++)
	{
		int s=0;
		while(arr[i]>0)
		{
			if(arr[i]%2==0)
				arr[i]/=2;
			else arr[i]--;
			s++;
		}
		c[i]=s;
	}
	for(int i=0;i<q;i++)
	{
		printf("%d\n",c[i]);
	}
	return 0;
}