#include<stdio.h>
#include<math.h>
int main(void)
{
    long long ans,n;
    scanf("%lld",&n);
    ans=(long long)pow((n-2),2);
    printf("%lld",ans);
    return 0;
}