#include<stdio.h>
int main()
{
	int n,m,l,k,i,j;
	scanf("%d%d",&n,&l);
	int a[n],b[l];
	scanf("%d%d",&k,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<l;i++)
	{
		scanf("%d",&b[i]);
	}
	if(a[k-1]<b[l-m])
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
