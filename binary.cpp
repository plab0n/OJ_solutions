#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string a,b;

    while(cin>>n)
    {
        cin>>a>>b;
        int one = 0,zero=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]=='1')++one;
            else ++zero;
        }
        int bi=0,bt=0;
        long long res = 0;
        for(int i=0; i<n; i++)
        {
            if(b[i]=='0')
            {
                if(a[i]=='1')
                {
                    res += (1LL*zero);
                    res -= (1LL*bi);
                    ++bt;
                }
                else{
                    res += (1LL*one);
                    res -= (1LL*bt);
                    ++bi;
                    }
            }
        }
        cout<<res<<endl;
    }
}
