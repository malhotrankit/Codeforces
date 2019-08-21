#include<stdio.h>
//#include<conio.h>
int main()
{
	int n,m,i,graph[1001],x,y,j;
	//clrscr();
	scanf("%d%d",&n,&m);
	for(i=0;i<m;i++)
	{
		scanf("%d%d",&x,&y);
		graph[x-1]=-1;
		graph[y-1]=-1;
	}
	for(i=0;i<n;i++)
	{
		if(graph[i]!=-1)
		{
			printf("%d\n",n-1);
			for(j=0;j<i;j++)
				printf("%d %d\n",i+1,j+1);
			for(j=i+1;j<n;j++)
				printf("%d %d\n",i+1,j+1);
			goto a1;
		}
	}
	a1:;
	return 0;
}