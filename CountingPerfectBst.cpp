/*Solution for N is the N'th Catalan Number*/

#include <bits/stdc++.h>
using namespace std;
int mark[100009];
vector<long long>prime;
const long long mod = 1e8+7;
long long d, x, y;
void extendedEuclid(long long A, long long B) {
    if(B == 0) {
        d = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        long long temp = x;
        x = (y+mod)%mod;
        y = temp - (A/B)*y;
    }
}

int main()
{
    vector<long long>st;
    map<long long,int>mp;
    for(long long i=2; i<=100000; i++)
    {
        long long mul = i*i;
        while(mul<=10000000000)
        {
            if(!mp[mul]){
                st.push_back(mul);
                mp[mul] = 1;
                }
                mul*=i;
           // ++i;
        }
    }
    //cout<<st.size()<<endl;
    //st.push_back(10001000000);
    sort(st.begin(),st.end());
    int lim = st.size()*2 + 10;
    long long fact[lim];
    fact[0] = 1;
    for(int i=1; i<=lim; i++)
    {
        fact[i] = (i*fact[i-1])%mod;
    }
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    int cas = 1;
   // for(int i=0; i<10; i++)cout<<st[i]<<" ";
  //  cout<<endl;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        int id1 = lower_bound(st.begin(),st.end(),a)-st.begin();
        int id2 = lower_bound(st.begin(),st.end(),b)-st.begin();
        long long res ;
        if(st[id1]>b || st[id2]<a)res = 0;
        else{
       // cout<<id1<<" "<<id2<<endl;
        int n = id2-id1;

        //cout<<n<<endl;
        extendedEuclid((fact[n+1]*fact[n])%mod,mod);
        res = ((fact[2*n]%mod) * (x%mod))%mod;
        }
        cout<<"Case "<<cas++<<": "<<res<<endl;
    }

}
