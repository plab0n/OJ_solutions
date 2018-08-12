#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>>vec;

    int n;
    while(cin>>n)
    {
        for(int i=1; i<=n; i++)
        {
            int a,b;
            cin>>a>>b;
            vec.push_back(make_pair(a,b));
        }
        int loc = 1;
        if(vec[0].first>vec[0].second)
            swap(vec[0].first,vec[0].second);
        for(int i=1; i<n; i++)
        {
            if(vec[i-1].second>=vec[i].first){
                if(vec[i].first>vec[i].second)
                swap(vec[i].first,vec[i].second);
                }

            else if(vec[i].second>vec[i-1].second)
            {
                if(vec[i].first>vec[i-1].second){
                loc = 0;
                break;
                }
                else if(vec[i].first>vec[i].second)
                    swap(vec[i].first,vec[i].second);
                else{
                    loc = 0;
                    break;
                }
            }

        }
        if(!loc)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        vec.clear();
    }
}
