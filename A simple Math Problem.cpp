#include <bits/stdc++.h>
using namespace std;

map<int,int>mp;
vector<int>prime;
vector<int>divi;
int composit[100009];
void linear_Sieve(int n)
{
    fill(composit,composit+n,0);
    for(int i=2; i<=n; i++)
    {
        if(!composit[i])
            prime.push_back(i);
            for(int j=0; j<prime.size() && i*prime[j]<=n; j++)
            {
                composit[i*prime[j]] = 1;
                if(i%prime[j]==0)break;
            }

    }
}

vector<pair<int,int>>factors;
void factorize( int n ) {
    int sqrtn = sqrt ( n );
    for ( int i = 0; i < prime.size() && prime[i] <= sqrtn; i++ ) {
        if ( n % prime[i] == 0 ) {
            int cnt = 0;
            while ( n % prime[i] == 0 ) {
                n /= prime[i];
                ++cnt;
            }
            factors.push_back(make_pair(prime[i],cnt));
            sqrtn = sqrt ( n );
        }
    }
    if ( n != 1 ) {
        factors.push_back(make_pair(n,1));
    }
}

void DivGen(int i, int gunFol)
{
   // cout<<gunFol<<endl;
    if(!mp[gunFol]){
    divi.push_back(gunFol);
    mp[gunFol] = 1;
    }
    if(i==factors.size())return ;

    for(int j=0; j<=factors[i].second; j++)
    {
        DivGen(i+1,gunFol);
        gunFol *= factors[i].first;
    }
}

int main()
{
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
    linear_Sieve(100000);
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        factorize(b);
        DivGen(0,1);
        int sz = divi.size();
        int loc = 0,res1=0,res2=0;

        for(int i=0; i<sz; i++)
        {
            if(divi[i]>a)continue;
               // cout<<divi[i]<<endl;
                int lcm = (divi[i]*(a-divi[i]))/__gcd(divi[i],a-divi[i]);
                if(lcm==b)
                {
                    res1 = divi[i];
                    res2 = a-divi[i];
                    loc = 1;
                    break;
                }
            }

        if(res1>res2)swap(res1,res2);
        if(loc)printf("%d %d\n",res1,res2);
        else printf("No Solution\n");
        factors.clear();
        divi.clear();
        mp.clear();
        //vec.clear();
    }
}
