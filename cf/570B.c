#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	if(m<=n/2)
	{
		printf("%d",m+1);
		return 0;
	}
	else
	{
		if(m-1)
		{
			printf("%d",m-1);return 0;
		}
		printf("1");
	}
	return 0;
}
