#include<stdio.h>
int main()
{
	long long int n,i,minl,minr,maxl,maxr;
	scanf("%I64d",&n);
	long long int a[n];
	if(n==0){printf("0 0");return 0;}
	for(i=0;i<n;i++)scanf("%I64d",&a[i]);
	printf("%I64d %I64d\n",a[1]-a[0],a[n-1]-a[0]);
	for(i=1;i<n-1;i++)
	{
		minl=a[i]-a[i-1];minr=a[i+1]-a[i];maxl=a[i]-a[0];maxr=a[n-1]-a[i];
		if(minl<minr)printf("%I64d ",minl);
		else printf("%I64d ",minr);
		if(maxl>maxr)printf("%I64d\n",maxl);
		else printf("%I64d\n",maxr);
	}
	printf("%I64d %I64d",a[n-1]-a[n-2],a[n-1]-a[0]);
	return 0;
}

