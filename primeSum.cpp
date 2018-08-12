#include <bits/stdc++.h>
using namespace std;

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

vector<int>prime;
int composit[1000009];
int sum[1000009];
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

void calcS()
{
    int sz = prime.size();
    for(int i=0; i<sz; i++)
    {
        for(int j=prime[i]; j<=1000000; j+=prime[i])
        {
            sum[j] += prime[i];
        }
    }
}
int main()
{
    Fast_IO();
    //FiLe();
    linear_Sieve(1000000);
    calcS();

    vector<int>vec;
    int cnt[1000009];
    int arr[1000009];
    int t;
    cin>>t;

    while(t--)
    {
        memset(cnt,0,sizeof(cnt));
        int n;
        cin>>n;
        int mx = 0;
        for(int i=1; i<=n; i++)
        {
            int val;
            cin>>val;
            mx = max(mx,val);
            if(!cnt[val])vec.push_back(val);
            cnt[val]++;
        }
        long long res = 0;
        //sort(arr+1,arr+n+1);
        int l = vec.size();
        for(int i=0; i<l; i++)
        {
            for(int j=vec[i]; j<=mx; j+=vec[i])
            {
               //cout<<"Value "<<j<<" "<<cnt[j]<<" "<<sum[j]<<" "<<sum[vec[i]]<<" "<<vec[i]<<endl;
                if(j==vec[i] && cnt[j]>1)
                    res += (1LL*(cnt[j]-1)*cnt[j]);
                else if(j!=vec[i] && cnt[j]>0 && sum[j]%sum[vec[i]]==0)
                {
                    res += (1LL*cnt[j]*cnt[vec[i]]);
                }
              //  cout<<res<<endl;
            }
        }
        cout<<res<<endl;
        vec.clear();
    }
}
