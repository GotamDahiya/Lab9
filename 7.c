#include<stdio.h>
#include<math.h>
int main(void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	int f[m][3];
	for(int i=0;i<m;i++)
	{
		scanf("%d %d %d",&f[i][0],&f[i][1],&f[i][2]);
	}
	int t;
	scanf("%d",&t);
	int arr[t][3];
	for(int i=0;i<t;i++)
	{
		scanf("%d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]);
	}
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][0]==f[j][0])
				
		}
	}
}