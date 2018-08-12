#include <bits/stdc++.h>
using namespace std;

vector<int>prime;
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
bool isPrime(int n)
{
    for(int i=0; i<prime.size() && prime[i]*prime[i]<=n; i++)
    {
        if(n%prime[i]==0)return false;

    }
    if(n>1)
    return true;
    return false;
}
int main()
{
    linear_Sieve(100000);
    int n;
    vector<int>res;
    while(cin>>n)
    {
        int temp = n;
        int loc = 0;
        while(temp>1)
        {
            if(isPrime(temp))
            {
                int dif = n-temp;
                if(dif==0)
                {
                    loc = 1;
                    res.push_back(temp);
                    break;
                }
                int tmp2 = dif;
                while(tmp2>1)
                {
                    if(isPrime(tmp2))
                    {
                        if(dif-tmp2==0)
                        {
                            loc = 1;
                            res.push_back(temp);
                            res.push_back(tmp2);
                            break;
                        }
                        if(isPrime(dif-tmp2))
                        {
                            loc = 1;
                            res.push_back(temp);
                            res.push_back(tmp2);
                            res.push_back(dif-tmp2);
                            break;
                        }
                    }
                    tmp2--;
                }
            }
            if(loc)
                break;
            --temp;
        }
        cout<<res.size()<<endl;
        for(int i=0; i<res.size(); i++)
            cout<<res[i]<<" ";
            cout<<endl;
            res.clear();
    }
}
