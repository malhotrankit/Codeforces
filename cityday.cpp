#include<iostream>
#include<algorithm>
#include<numeric>
#include<iterator>
#include<vector>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<math.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
 
int main()
{
   vector< pair< long long, long long > > v, p;
   long long x,y,i,n,ele,j,flag;
   scanf("%lld%lld%lld",&n,&x,&y);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&ele);
       v.push_back({i,ele});
   }
   for(i=0;i<n;i++)
   {
       flag=1;
       for(j=i-1;j>=i-x;j--)
       {
           if(j>=0)
           {
               if(v[i].second>v[j].second)
               {
                    flag=0;
                    break;
               }
           }
        }
        if(flag==1)
        {
            for(j=i+1;j<=i+y;j++)
            {
                if(j<n)
                {
                    if(v[i].second>v[j].second)
                    {
                         flag=0;
                         break;
                    }
                }
            }
        }
        if(flag==1)
        {
            printf("%lld\n",v[i].first);
            break;
       }
     }
     return 0;   
}