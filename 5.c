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
	for (int i = 0; i < l; ++i)
	{
		printf("%c",str[i]);
	}
	printf("\n");
	return 0;
}