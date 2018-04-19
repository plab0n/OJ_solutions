#include <bits/stdc++.h>
using namespace std;

int tree[100009],tree2[100009],len;
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
int JugFol2(int idx)
{
    int sum=0;
    while(idx>0)
    {
        sum+=tree2[idx];
        idx-=(idx&(-idx));
    }
    return sum;
}
void update(int idx,int val)
{
   // cout<<n<<endl;
    while(idx<=len)
    {
        tree[idx]+=val;
       // cout<<tree[idx]<<endl;
        idx+=(idx&(-idx));
    }
}
void update2(int idx,int val)
{
   // cout<<n<<endl;
    while(idx<=len)
    {
        tree2[idx]+=val;
       // cout<<tree[idx]<<endl;
        idx+=(idx&(-idx));
    }
}
int query(int i,int j)
{
    return (JugFol(j)-JugFol(i-1));
}
int query2(int i,int j)
{
    return (JugFol2(j)-JugFol2(i-1));
}
int main()
{
    int t;
    cin>>t;
    string str;
    int cas = 1;
    while(t--)
    {
        cin>>str;
        memset(tree,0,sizeof(tree));
        memset(tree2,0,sizeof(tree2));
        len = str.length();
        for(int i=0; i<len; i++)
        {
            if(str[i]=='(')
            {
                update(i+1,1);
            }
            else{
                update2(i+1,1);
            }
        }

        int q;
        printf("Case %d:\n",cas++);
        int l,r;
        cin>>q;
        while(q--)
        {
            int type;
            cin>>type;
            if(type==1)
            {
                cin>>l>>r;
               // cout<<query(l,r)<<" "<<query2(l,r)<<endl;
               if(l==r)
                cout<<"NO"<<endl;
               else{
                if(query(l,r)==query2(l,r))
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
               }
            }
            else{
                    int idx;
                cin>>idx;
                if(str[idx-1]=='('){
                    str[idx-1] = ')';
                    update(idx,-1);
                    update2(idx,1);

                }
                else{
                        str[idx-1] = '(';
                    update(idx,1);
                    update2(idx,-1);
                }
            }
        }
    }
}
