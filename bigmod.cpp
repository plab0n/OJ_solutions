#include <iostream>
using namespace std;

int bigmod(long long a, long long b, long long m)
{
    if(b==0)return 1;
    if(b==1)return a;
    int x = bigmod(a,b/2,m);
    x = (x*x)%m;
    if(b%2==1) x = (x*a)%m;
    return x;
}
int main ()
{
    long long a,b,m;

    while(cin>>a>>m)
    {
        cout<<bigmod(2,a,m)<<endl;
    }
}
