#include<stdio.h>
int main()
{
	int n,i,j,k,max=0,sum=0;
	scanf("%d",&n);
	int a[n+5],c[104]={0};
	int b[1000005]={0};
	char u,o;
	for(i=0;i<n;i++)
	{
		scanf("%c%c%c",&u,&o,&u);
		scanf("%d",&a[i]);
		if(o=='+')
		{
			sum+=1;
			b[a[i]]=1;
			if(sum>max)
				max=sum;
		}
		else
		{
			if(b[a[i]]!=0)
				sum-=1;
			else
			{
				max++;
			}
			b[a[i]]=0;
		}
	}
	printf("%d",max);
	return 0;
}

