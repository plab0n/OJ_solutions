#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main ()
{
    int t;
    double pi,r,res,sq;
    scanf("%d", &t);
     pi = 2*acos(0.0);
    int cas = 1;
    while(t--)
    {
        scanf("%lf", &r);
        sq = r+r;

        res = (sq*sq)-(pi*(r*r));
        res+=(1/1000000000);
        printf("Case %d: %.2lf\n",cas++,res);
    }
}
