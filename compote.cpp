#include<stdio.h>
int main()
{
    
   int a,b,c,ans=0,i;
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
   for(i=1;i<=a;i++)
   {
       if(2*i<=b&&4*i<=c)
           ans=7*i;
       else
           break;
   }
   printf("%d\n",ans);
   return 0;
}