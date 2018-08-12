#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,a,b;
    while(cin>>n>>m>>a>>b)
    {
        if(n%m==0)cout<<0<<endl;
        else{
        long long mini = (m*(n/m));
        long long res1 = (n-mini)*b;
        long long maxi = m*((n/m)+1);
        long long res2 = (maxi-n)*a;
        //cout<<res1<<" "<<res2<<endl;
        cout<<min(res1,res2)<<endl;
        }
    }
}
