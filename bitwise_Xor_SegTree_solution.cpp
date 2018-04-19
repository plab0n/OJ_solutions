#include <bits/stdc++.h>
#define mx 200000
using namespace std;

int arr[mx];
int tree[mx*3];
int l,r;
int sum(int node, int start,int end){
   // cout<<l<<" "<<r<<" "<<start<<" "<<end<<endl;
    if(l>end || r<start)
        return 0;
    if(start>=l && end<=r)
        return tree[node];

    int left = node*2;
    int right = node*2+1;
    int mid = (start+end)/2;
    int p1 = sum(left,start,mid);
    int p2 = sum(right,mid+1,end);
    return p1|p2;
}
void init(int node,int start,int end)
{
    if(start==end)
    {
        tree[node] = arr[start];
        return ;
    }
    int left = node*2;
    int right = node*2+1;
    int mid = (start+end)/2;
    init(left,start,mid);
    init(right,mid+1,end);
    tree[node] = tree[left] | tree[right];

}
void update(int node,int start,int end,int i,int val)
{
     if(i>end || i<start)
        return ;
     if(start>=i && end<=i){
         tree[node] = val;
        return ;
    }

    int left = node*2;
    int right = node*2+1;
    int mid = (start+end)/2;
    update(left,start,mid,i,val);
    update(right,mid+1,end,i,val);
    cout<<tree[left]<<" "<<tree[right]<<" "<<node<<endl;
    tree[node] = tree[left] | tree[right];

}
int main()
{
    int n,m,i,p,b;

    scanf("%d%d",&n,&m);
    int pow = 2;
    for(i=2; i<=n; i++)
        pow*=i;
    for(i=1; i<=pow; i++)
    {
        scanf("%d",arr+i);
    }
    init(1,1,pow);
    /*for(i=1; i<=pow*2; i++)
            cout<<tree[i]<<" ";*/
            //tree[0] = tree[1];
    while(m--)
    {
        l = 1,r=pow;
        scanf("%d%d",&p,&b);
        update(1,1,pow,p,b);

        printf("%d\n",tree[1]^tree[2]);
    }
}
