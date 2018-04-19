#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i;
    long arr[105];
    vector<int>vec;

    while(cin>>n>>k)
    {
        for(i=1; i<=n; i++)
            vec.push_back(i);
        int pos;
        for(i=0; i<k; i++)
            cin>>arr[i];
        pos = 1;
        int sz = vec.size();
        cout<<sz<<endl;
        for(i=0; i<k; i++)
        {
            arr[i]-=abs(arr[i]-(sz-pos));
            pos = arr[i]%sz;
            cout<<pos<<endl;
            cout<<vec[pos-1]<<" ";
            vec.erase(remove(vec.begin(),vec.end(),vec[pos-1]));
            sz = vec.size();
        }
        vec.clear();
        cout<<endl;
    }
}
