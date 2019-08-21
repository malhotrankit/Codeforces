#include<stdio.h>
int a[401][401],reach[401],n,m;
char str1[21],str2[21];
void dfs(int v)
{
	int i;
	reach[v]=1;
	for(i=1;i<=n*m;i++)
		if(a[v][i]&&!reach[i])
			dfs(i);
}
int main()
{
	int i,j,count1=0,count2=0,p,k;
	scanf("%d%d",&n,&m);
	scanf("%s",str1);
	for(j=0;j<n;j++)
	{
		p=(j)*m+1;
		if(str1[j]=='>')
		{
			for(k=p;k<=p+m-2;k++)
			{
				a[k][k+1]=1;
			}
		}
		else
		{
			for(k=p+m-1;k>p;k--)
			{
				a[k][k-1]=1;
			}
		}
	}
	scanf("%s",str2);
	for(j=0;j<m;j++)
	{
		if(str2[j]=='v')
		{
			for(k=j+1;k<=(n-2)*m+j+1;k=k+m)
			{
				a[k][k+m]=1;
			}
		}
		else
		{
			for(k=(n-1)*m+j+1;k>j+1;k=k-m)
			{
				a[k][k-m]=1;
			}
		}
 
	}
	for(j=1;j<=n*m;j++)
	{
		dfs(j);
		count1=0;
		for(i=1;i<=n*m;i++)
		{
			if(reach[i])
				count1++;
			reach[i]=0;
		}
		if(count1==n*m)
			count2++;
		else
			break;
	}
	if(count2==n*m)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}