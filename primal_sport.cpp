#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
using namespace std;
vector<int>prime;
int mark[1000009];
long long cnt,n,m;
void sieve()
{
    long long i,j,limit = sqrt(1000000*1.),temp;

    prime.push_back(2);
    for(i=3; i<=1000000; i+=2)
    {
        if(!mark[i])
            {
                prime.push_back(i);
                if(i<=limit)
                {
                    for(j=i*i; j<=1000000; j+=i*2)
                    {
                        mark[j] = 1;
                    }
                }
            }
    }
}
int main()
{
    sieve();
    int n;
    while(cin>>n)
    {
        int i;
        for(i=3; ; i++)
        {
            int lb = lower_bound(prime.begin(),prime.end(),i)-prime.begin();
            int div = (i/prime[lb]);
            if(i%prime[lb])++div;
            int v1 = div*prime[lb];
            int lb2 = lower_bound(prime.begin(),prime.end(),v1)-prime.begin();
            div = (v1/prime[lb2]);
            if(v1%lb2)++div;
            int v2 = div*prime[lb2];
          //  cout<<v1<<" "<<v2<<endl;
            if(v2==n)
                break;
        }
        cout<<i<<endl;
    }
}
