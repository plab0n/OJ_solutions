#include <bits/stdc++.h>
#include <vector>

using namespace std;
int vis[10009];
int main()
{
    vector<pair<int,int>>vec;

    int p,q,l,r,i,j,k,a,b;
    cin>>p>>q>>l>>r;
    for(i=0; i<p; i++)
    {
        cin>>a>>b;
        vec.push_back(make_pair(a,b));
    }
    sort(vec.begin(),vec.end());
    int cnt = 0;
    for(i=0; i<q; i++)
    {
        cin>>a>>b;
        int loc = 0;
        for(j=l; j<=r; j++)
        {
            for(k=0; k<p; k++)
            {
                //cout<<"Vec "<<vec[k].first<<" "<<vec[k].second<<endl;
                if(((a+j)>=vec[k].first && (a+j)<=vec[k].second)||((b+j)>=vec[k].first&&(b+j)<=vec[k].second))
                {
                    if(!vis[j]){
                    ++cnt;
                    vis[j] = 1;
                    loc = 1;
                    }
                    break;
                }
            }
        }
    }
    cout<<cnt<<endl;
}
