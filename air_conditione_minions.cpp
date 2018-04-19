#include <bits/stdc++.h>
using namespace std;

int main()
{
    //pair<int,int>pii;
    vector<pair<int,int>>vec;
    int t;

    int n;
       while( cin>>n){
        while(n--)
        {
            int l,u;
            cin>>l>>u;
            vec.push_back(make_pair(l,u));
        }
        sort(vec.begin(),vec.end());
        int cnt = 1;
        int sz = vec.size();

        int mx_tm = vec[0].second;
        for(int i=1; i<sz; i++)
        {
            if(vec[i].first>mx_tm)
            {
                ++cnt;
                mx_tm = vec[i].second;
            }
        }
        vec.clear();
        cout<<cnt<<endl;
       }
    }

