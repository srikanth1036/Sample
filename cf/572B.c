#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void* a,const void* b)
{
	return ( *(int*)a - *(int*)b );
}
int main()
{
	int n,s,arr[100005][2]={0},i,j=0,k=0,p,q;
	char c;
	scanf("%d%d",&n,&s);
	int a[1002],b[1002];
	int flag[100005]={0};
	for(i=0;i<n;i++)
	{
		getchar();
		scanf("%c%d%d",&c,&p,&q);
		flag[p]=1;
		if(c=='B')
		{
			arr[p][0]+=q;
			if(!flag[p])
				a[j++]=p;
		}
		else
		{
			arr[p][1]+=q;
			if(!flag[p])
				b[k++]=p;
		}
	}
	qsort(a,j-1,sizeof(int),cmpfunc);
	qsort(b,k-1,sizeof(int),cmpfunc);
	for(i=0;i<=k-1&&i<s;i++)
	{
		printf("B %d %d\n",a[i],arr[a[i]][0]);
	}
	for(i=j-1;i>=0&&i>j-1-s;i--)
	{
		printf("B %d %d\n",a[i],arr[a[i]][0]);
	}
	return 0;
}
