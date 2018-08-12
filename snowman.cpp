#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    map<int,int>mp;
    vector<int>vec;
    vector<int>res[100009];
    cin>>n;

        for(int i=1; i<=n; i++)
        {
            int val;
            cin>>val;
            if(!mp[val])vec.push_back(val);
            mp[val]++;
        }
        //sort(vec.begin(),vec.end());
        if(vec.size()<3)cout<<0<<endl;
        else{
        int j = 0;
        for(int i=vec.size()-1; i>=0; i--)
        {
            while(mp[vec[i]]>0)
            {
                int tmp = i-1;
                int cnt = 0;
                while(tmp>=0 && cnt<2)
                {
                    if(mp[vec[tmp]]>0)
                    {
                        res[j].push_back(vec[tmp]);
                        mp[vec[tmp]]--;
                        ++cnt;
                    }
                    --tmp;
                }
                if(cnt==2)
                {
                    res[j].push_back(vec[i]);
                    mp[vec[i]]--;
                    ++j;
                }
                else
                    break;
                //++j;
            }
            }
            cout<<j<<endl;
            for(int i=0; i<j; i++)
            {
                sort(res[i].begin(),res[i].end());
                cout<<res[i][2]<<" "<<res[i][1]<<" "<<res[i][0]<<endl;
                res[i].clear();
            }
            vec.clear();
            mp.clear();

    }
}
