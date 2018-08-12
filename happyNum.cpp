#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    map<int,int>vis;
    while(cin>>n)
    {
        int loc = 0;
        while(1)
        {
            int temp = n;
            vis[temp] = 1;
            int sum = 0;
            while(temp>0)
            {
                sum += ((temp%10)*(temp%10));
                temp/=10;
            }
            if(sum==1)
            {
                loc = 1;
                break;
            }
            if(vis[sum])
            {
                break;
            }
            n = sum;
        }
        if(loc)cout<<"HAPPY"<<endl;
        else cout<<"UNHAPPY"<<endl;
        vis.clear();
    }
}
