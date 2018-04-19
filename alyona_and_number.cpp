#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;

    while(cin>>n>>m)
    {
        int mx = n+m;
        int cnt = 0;
        for(int i=5; i<=mx; i+=5)
        {
            if(n>=i/2 && m>=i/2)
                cnt+=(i/2);
            else if(m<(i/2)){
                cnt+=m;
            }
            else if(n<(i/2))
                cnt+=n;
        }
        cout<<cnt<<endl;
    }
}
