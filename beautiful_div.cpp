#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>vec[100009];
    for(int i=1; i<=100000; i++)
    {
        for(int j=i; j<=100000; j+=i)
        {
            vec[j].push_back(i);
        }
    }
    int n;
    while(cin>>n)
    {
        int sz = vec[n].size();
        for(int i=sz-1; i>=0; i--)
        {
            int loc = 0;
            for(int j=1; j<=17; j++)
            {
                //cout<<(pow(2,j)-1)*pow(2,j-1)<<" "<<vec[n][i]<<endl;
                if((long long)((pow(2,j)-1)*(pow(2,j-1)))==vec[n][i])
                {
                    cout<<vec[n][i]<<endl;
                    loc =1;
                    break;
                }
            }
            if(loc)
            {
                break;
            }
        }
    }
}
