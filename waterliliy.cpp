#include<iostream>
int main()
{
   double l,h;
   scanf("%lf%lf",&h,&l);
   printf("%.13lf\n",(l*l-h*h)/(2*h));
}
