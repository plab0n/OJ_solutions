#include <bits/stdc++.h>
using namespace std;

int tree[100009],n;
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
int query(int i,int j)
{
    return abs(JugFol(i-1)-JugFol(j));
}
int main()
{
    int t,m,i,op,a,v,j,cas=1;

    scanf("%d",&t);
    int arr[100009];
    while(t--)
    {
        printf("Case %d:\n",cas);
        memset(tree,0,sizeof(tree));
        scanf("%d%d",&n,&m);
        for(i=1; i<=n; i++)
        {
            scanf("%d",&arr[i]);
            update(i,arr[i]);
        }

        while(m--)
        {
            scanf("%d",&op);

            switch(op)
            {
            case 1:
                scanf("%d",&a);
                printf("%d\n",arr[a+1]);
                update(a+1,-arr[a+1]);
                arr[a+1] = 0;
                break;
            case 2:
                scanf("%d%d",&i,&v);
                update(i+1,v);
                arr[i+1]+=v;
                break;
            case 3:
                scanf("%d%d",&i,&j);
                printf("%d\n",query(i+1,j+1));
                break;
            }
        }
    }
}
