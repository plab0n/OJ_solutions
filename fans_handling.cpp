#include <bits/stdc++.h>
using namespace std;

int arr[1000009],n;

int sum(int i)
{
    int s = 0;
    while(i>0)
    {
        s+=arr[i];
        i-=(i&(-i));
    }
    return s;
}
void update(int idx,int value)
{
    while(idx<=n)
    {
        arr[idx]+=value;
        idx+=(idx&(-idx));
    }
}
int JugFol(int a,int b)
{
    return abs(sum(a-1)-sum(b));
}
int main()
{
    int q;
    char str[10];
    int pos,i;
    scanf("%d%d",&n,&q);
    while(q--)
    {
        scanf("%s",str);
        if(strcmp(str,"add")==0){
                scanf("%d%d",&pos,&i);
            update(pos,i);
        }
        else{
            scanf("%d%d",&pos,&i);
            printf("%d\n",JugFol(pos,i));
        }
    }
}
