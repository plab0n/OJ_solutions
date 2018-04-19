#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int bin[100000008];
    while(cin>>n)
    {
        for(int i=1; i<=n*2; i++)
            cin>>bin[i];
        int cnt = 0;
        for(int i=2; i<=n*2; i++)
        {
            if(bin[i]==bin[i-1]){
                ++cnt;
                if(bin[i]==0)
                    bin[i] = 1;
                else
                    bin[i] = 0;
            }
        }
        cout<<cnt/2<<endl;
    }
}
