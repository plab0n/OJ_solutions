#include <bits/stdc++.h>
using namespace std;
int mark[10000009];
int tree[100009],n;
void sieve()
{
    long long i,j,limit = sqrt(10000000*1.),temp;
    mark[1] = 1;
    mark[0] = 1;
    for(i=4; i<=10000000; i+=2)
    {
        mark[i] = 1;
    }
    for(i=3; i<=10000000; i+=2)
    {
        if(!mark[i])
            {
                if(i<=limit)
                {
                    for(j=i*i; j<=10000000; j+=i*2)
                    {
                        mark[j] = 1;
                    }
                }
            }
    }
}

int JugFol(int idx)
{
    int sum=0;
    while(idx>0)
    {
        sum+=tree[idx];
        idx-=(idx&(-idx));
    }
    return sum;
}
void update(int idx,int val)
{
   // cout<<n<<endl;
    while(idx<=n)
    {
        tree[idx]+=val;
       // cout<<tree[idx]<<endl;
        idx+=(idx&(-idx));
    }
}
void update2(int idx,int val)
{
    while(idx<=n)
    {
        tree[idx]-=val;
       // cout<<tree[idx]<<endl;
        idx+=(idx&(-idx));
    }
}
int query(int i,int j)
{
    return abs(JugFol(i-1)-JugFol(j));
}
int main()
{
    int q,arr[100009];
    sieve();
    cin>>n;
    int val;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        if(mark[arr[i]]!=1)
        {
            update(i,1);
        }
    }
    int a,b,c;
    cin>>q;

    while(q--)
    {
        cin>>a;
        if(a==1)
        {
            cin>>b>>c;
            if(b<=c)
            cout<<query(b,c)<<endl;
            else
                cout<<query(c,b)<<endl;
        }
        else if(a==2)
        {
            cin>>b>>c;
            if(mark[c]!=1)
            {
               if(mark[arr[b]]==1){
                    arr[b] = c;
               update(b,1);
               }
            }
            else
            {
                if(mark[arr[b]]!=1)
                {
                    arr[b] = c;
                    update2(b,1);
                }
            }
        }
    }
}
