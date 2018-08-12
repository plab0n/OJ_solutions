#include <bits/stdc++.h>
using namespace std;


double a,b,c,d,t,m;
void Fast_IO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
}
void FiLe()
{
	freopen("input.in","r",stdin);
	//freopen("output.out","w",stdout);
}

double bisection(double s, double en)
{
    int cnt = 0;
    while(s<en)
    {
        ++cnt;
        double mid = (s+en)/2.00;
        double val = a*(pow(mid,4)) + b*((pow(mid,3))) + c*(pow(mid,2)) + d*mid;
        double time = (60*m)/mid;
        double lagbe = (val*time)/60;
        if(lagbe-t==0)
        {
            return mid;
        }
        if(lagbe-t>0)
        {
            en = mid;
        }
        if(lagbe-t<0)
            s = mid;
        if(cnt>100000)
            return mid;
    }
}

int main()
{
   // Fast_IO();
   // FiLe();
    while(cin>>a>>b>>c>>d>>m>>t)
    {
       double val = bisection(0, 1000000000000000000*1.00);
       long long get = val*1000;
       if(get%10>=5)
            cout<<fixed<<setprecision(2)<<val-.01<<endl;
        else
            cout<<fixed<<setprecision(2)<<val<<endl;
    }
}
