#include <bits/stdc++.h>
#define mx 100009
typedef long long i64;
using namespace std;

double arr[mx];
int l,r;
struct info{
   double sum,prop;
}tree[mx*2];

void init(int node,int start,int end)
{
    if(start==end)
    {
        tree[node].sum = arr[start];
    }
    int mid = (start+end)/2;
    int left = node*2;
    int right = node*2+1;

    init(left,start,mid);
    init(right,mid+1,end);
    tree[node].sum = tree[left].sum+tree[right].sum;
}
void update(int node,int start,int end,double val)
{
    if(l>end || r<start)
        return ;
    if(start>=l && end<=r)
    {
        tree[node].sum = val*(end-start+1);
        tree[node].prop -= val;
        return ;
    }
    int mid = (start+end)/2;
    int left = node*2;
    int right = node*2+1;
    update(left,start,mid,val);
    update(right,mid+1,end,val);
    tree[node].sum = tree[left].sum+tree[right].sum+(tree[node].prop*(end-start+1));
}
double Query(int node,int start,int end,double carry =0)
{
    if(l>end || r<start)
        return 0;
    if(start>=l && end<=r)
    {
        return tree[node].sum+(carry*(end-start+1));
    }
    int mid = (start+end)/2;
    int left = node*2;
    int right = node*2+1;
    double p1 = Query(left,start,mid,carry+tree[left].prop);
    double p2 = Query(right,mid+1,end,carry+tree[right].prop);
    return p1+p2;
}
int main()
{
    int t,n,q;
    scanf("%d%d",&n,&q);
    for(int i=1; i<=n; i++)
        scanf("%d",arr+i);
        init(1,1,n);
    for(int i=1; i<=q; i++)
    {
        scanf("%d",&t);
        if(t==0)
        {
            int a,s;
            scanf("%d%d",&a,&s);
            l=1,r=n;
            update(1,1,n,(s/n-1));
            l=a,r=a;
            update(1,1,n,s);
        }
        else{
            int id;
            scanf("%d",&id);
            l=id,r=id;
            printf("%.6lf\n",Query(1,1,n,0));
        }
    }
}

