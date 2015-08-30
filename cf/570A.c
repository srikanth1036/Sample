#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,i,j,k,win,vot,fin,count=0;
	scanf("%d%d",&n,&m);
	int *a=malloc(110*sizeof(int));
	for(i=0;i<n;i++)a[i]=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&k);
			if(j==0)
			{
				vot=k;win=0;
			}
			if(k>vot)
			{
				win=j;
				vot=k;
			}
		}
		a[win]++;
		if(a[win]==count&&win<fin)
		{
			fin=win;
			continue;
		}
		if(a[win]>count)
		{
			fin=win;
			count=a[win];
		}
	}
	printf("%d\n",fin+1);
	return 0;
}
