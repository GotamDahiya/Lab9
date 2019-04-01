#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
	int l;
	scanf("%d",&l);
	char str[l];
	scanf("%s",str);
	// int done;
	// do
	// {
	// 	done=1;
	// 	for(int i=0;i<(l-1);i++)
	// 	{
	// 		if(str[i]>str[i+1])
	// 		{
	// 			char temp=str[i];
	// 			str[i]=str[i+1];
	// 			str[i+1]=temp;
	// 			done=0;
	// 		}
	// 	}
	// }while(done==0);
	for(int i=1;i<(l-1);i++)
	{
		for(int j=1;j<(l-1);j++)
		{
			if(str[j]!=str[j+1] && str[j]==str[j-1])
			{
				char ch1=str[j];
				str[j]=str[j+1];
				str[j+1]=ch1;
			}
		}
	}
	for (int i = 0; i < l; ++i)
	{
		printf("%c",str[i]);
	}
	printf("\n");
	return 0;
}