#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct project
{
	int p;
	int c;
};
void push(struct project arr[],int a,int b,int i)
{
	arr[i].p=a;
	arr[i].c=b;
}
int capital(struct project arr[],int w,int n,int k)
{
	int start=0;
	int end=1;
	w=arr[start].c-w;
	while(w<0 || end!=start && i<k)
	{
		int i=0;
		
		i++;
	}
}
int main(void)
{
	int k,w,n;
	scanf("%d %d %d",&k,&w,&n);
	struct project arr[n];
	for(int i=0;i<n;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		push(arr,a,b,i);
	}
	int v=capital(arr,w,n,k);
}