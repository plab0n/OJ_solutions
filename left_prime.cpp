#include <bits/stdc++.h>
using namespace std;
vector<int>prime;
int mark[10000009];
long long cnt,n,m;
void sieve()
{
    long long i,j,limit = sqrt(10000000*1.),temp;

    for(i=4; i<=10000000; i+=2)
    {
        mark[i] = 1;
    }

    prime.push_back(2);
    for(i=3; i<=10000000; i+=2)
    {
        if(!mark[i])
            {
                prime.push_back(i);
                if(i<=limit)
                {
                    for(j=i*i; j<=10000000; j+=i*2)
                    {
                        mark[j] = 1;
                    }
                }
            }
    }
}
int bin_srch(int num)
{
    int s =0;
    int e = prime.size();
    if(num>prime[prime.size()-1])
    {
        return prime.size();
    }
    while(s<e)
    {
        int mid = (s+e)/2;

        if ((prime[mid-1]<num && prime[mid]>num)||prime[mid]==num)
            return mid;

        else if(prime[mid]>num)
            e = mid;
        else if(prime[mid]<num)
            s = mid;

    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    sieve();
    while(t--)
    {
        cin>>n;
        cout<<bin_srch(n)<<endl;
    }
}
