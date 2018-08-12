#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long l,r,a,b;
        cin>>l>>r>>a>>b;
        long long tmp = a;
        if(a==b)
        {
            while(tmp>0)
            {
                if(tmp%2==0)
                {
                    val += (1<<bit);
                    if(val>=l && val<=r)
                    {

                    }
                    else
                        break;
                }
            }
            cout<<
        }
        else{
        while(tmp>0)
        {
            if(tmp%2==0)
            {
                val += (1<<bit);
                if(val>=l && val<=r)
                {
                    res = max(res,((val^a)+(a&b)+(val^b)));
                }
                else
                    break;
            }
        }
        tmp = b;
        val = 0;
        while(tmp>0)
        {
            if(tmp%2==0)
            {
                val += (1<<bit);
                if(val>=l && val<=r)
                {
                    res = max(res,((val^a)+(a&b)+(val^b)));
                }
                else
                    break;
            }
        }
        cout<<res<<endl;
        }
    }
}
