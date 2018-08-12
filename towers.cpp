#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,a,b,k;

    while(cin>>n>>h>>a>>b>>k)
    {
        int ta,tb,tc,td;
        while(k--){
        cin>>ta>>tb>>tc>>td;

        if(ta==tc)
        {
            cout<< 1*abs(tb-td)<<endl;
        }
        else{
            if(tb>=a && tb<=b)
            {
                cout<<abs(tb-td) + abs(ta-tc)<<endl;
            }
            else{
                int dist1 = abs(b-tb) + abs(b-td) + abs(ta-tc);
                int dist2 = abs(a-tb)+ abs(a-td) + abs(ta-tc);
                cout<<min(dist1,dist2)<<endl;
            }
        }
        }
    }
}
