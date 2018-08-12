#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=(n/2)+1; i<=n; i++)
            cout<<i<<" ";
        for(int i=1; i<=(n/2); i++)cout<<i<<" ";
        cout<<endl;

    }
}
