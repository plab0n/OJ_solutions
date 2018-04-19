#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[15];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    long long ans = 0;
    int gen[20];
    int sz = 1;
    long long po = 1LL*pow(3,n);
    for(int i=6; i<po; i++)
    {
        long long temp = i,bon=0,nay=0,an=0;
        sz = 0;
        memset(gen,0,sizeof(gen));
        int j = n-1;
        while(temp>0)
        {
           // cout<<temp%3<<" ";
            gen[j--] = (temp%3);
            temp/=3;
        }
        //cout<<endl;
        for(int k=0; k<n; k++)
        {
            if(gen[k]==0)
            {
                an+=arr[k];
            }
            if(gen[k]==1)
            {
                bon+=arr[k];
            }
            if(gen[k]==2)
            {
                nay+=arr[k];
            }
        }
      //  cout<<bon<<" "<<nay<<" "<<an<<endl;
        if(bon%3==0 && nay%5==0 && an%7==0 && bon>0 && nay>0 && an>0)
            ++ans;
    }
    cout<<ans<<endl;
}
