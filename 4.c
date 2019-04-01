#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct station
{
	int p;
	int d;
};
void push(struct station arr[],int a,int b,int i)
{
	arr[i].p=a;
	arr[i].d=b;
}
int tour(struct station arr[],int n)
{
	int start=0;
	int end=1;
	int cp=arr[start].p-arr[start].d;
	while(cp<0 || end!=start)
	{
		while(cp<0 && start!=end)
		{
			cp-=arr[start].p-arr[start].d;
			start=(start+1)%n;

			if(start == 0)
				return -1;
		}
		cp+=arr[end].p-arr[end].d;
		end=(end+1)%n;
	}
	return start;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	struct station arr[n];
	for(int i=0;i<n;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		push(arr,a,b,i);
	}
	int start=tour(arr,n);
	(start==-1)?printf("Not possible\n"):printf("%d\n",start);
	return 0;
}