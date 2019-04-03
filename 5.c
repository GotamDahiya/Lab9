#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
	int l;
	scanf("%d",&l);
	char str[l];
	scanf("%s",str);
	//for(int i=1;i<(l-1);i++)
	//{
		for(int j=1;j<(l-1);j++)
		{
			if(str[j]!=str[j+1] && str[j]==str[j-1])
			{
				char ch1=str[j];
				str[j]=str[j+1];
				str[j+1]=ch1;
			}
		}
	//}
	// for(int i=l-2;i>0;i--)
	// {
		for(int j=l-2;j>0;j--)
		{
			if(str[j]!=str[j-1] && str[j]==str[j+1])
			{
				char ch2=str[j];
				str[j]=str[j-1];
				str[j-1]=ch2;
			}
		}
	//}
	int c=0;
	for(int i=0;i<(l-1);i++)
	{
		if(str[i]!=str[i+1])
			c=1;
		else break;
	}
	(c==1)?printf("Possible\n"):printf("not possible\n");
	return 0;
}