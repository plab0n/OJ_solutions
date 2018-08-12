#include <bits/stdc++.h>
using namespace std;

int main()
{
    int div[1009],arr[1009];
    memset(div,0,sizeof(div));
    for(int i=1; i<=1000; i++)
    {
        for(int j=i; j<=1000; j+=i)
            div[j]+=1;
    }
    for(int i=1; i<=1000; i++)arr[i] = i;
    for(int i=1; i<=1000; i++)
    {
        for(int j=1; j<1000; j++)
        {
            if(div[arr[j]]>div[arr[j+1]])
                swap(arr[j],arr[j+1]);
            if(div[arr[j]]==div[arr[j+1]] && arr[j]<arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
    int t,cas=1;
    ios_base::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<"Case "<<cas++<<": "<<arr[n]<<endl;
    }
}
