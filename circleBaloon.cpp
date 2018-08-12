#include <bits/stdc++.h>
#define PI acos(-1.0)
using namespace std;
double poridhi;
double n,r;

double bisect(double s,double en)
{
    int cnt = 0;
    while(s<en)
    {
        ++cnt;
        double mid = (s+en)/2;
        double sz = PI*mid*mid * n;
        if(sz-poridhi==0)
            return mid;
        if(sz-poridhi>0)
            en = mid;
        if(sz-poridhi<0)
            s = mid;
        if(cnt>1000)
            return mid;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>r>>n;
        poridhi = PI*r*r;
        cout<<poridhi<<endl;
        cout<<bisect(0,100000*1.00)<<endl;
    }
}
