#include <bits/stdc++.h>
using namespace std;

int main()
{
    double ax,ay,bx,by,cx,cy;

    int t;
    cin>>t;

    while(t--)
    {
        cin>>ax>>ay>>bx>>by>>cx>>cy;
       // cout<<(ax*(by-cy)+bx*(cy-ay)+cx*(ay-by))<<endl;
        double area = abs((ax*(by-cy)+bx*(cy-ay)+cx*(ay-by))/2.0);
        cout<<fixed<<setprecision(10)<<area*2<<endl;
    }
}
