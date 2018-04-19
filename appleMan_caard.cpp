#include <bits/stdc++.h>
using namespace std;
int main()
{
    int calc[100];
    char str;
    int n,k,i;
    for(i=0; i<100; i++)
        calc[i] = 0;
    cin>>n>>k;

    for(i=1; i<=n; i++)
    {
        cin>>str;
        calc[(int)str]++;
    }
    sort(calc,calc+100);

    int cnt = 99;
    long long sum = 0;
    while(k>0)
    {
        //cout<<calc[cnt]<<endl;
        int val = k-calc[cnt];

        if(val>0){
             sum+=(calc[cnt]*calc[cnt]);
             k-=calc[cnt];
        }
        else{
            sum+=(calc[cnt]+val)*(calc[cnt]+val);
                    k-=(calc[cnt]+val);
        }
        cnt--;
        //cout<<k<<" val "<<val<<endl;
    }
    cout<<sum<<endl;

}
