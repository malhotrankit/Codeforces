#include<stdio.h>
char str1[2001],str2[2001];
int n,i,j;
int main()
{
    scanf("%d",&n);
    scanf("%s",&str1);
    if(n%2==0)
    {
        for(i=n-2;i>=0;i=i-2)
            str2[j++]=str1[i];
        for(i=1;i<n;i=i+2)
            str2[j++]=str1[i];
    }
    else
    {   
        for(i=n-2;i>=1;i=i-2)
            str2[j++]=str1[i];
        for(i=0;i<n;i=i+2)
            str2[j++]=str1[i];
    }
    printf("%s\n",str2);
    return 0;
}