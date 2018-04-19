#include <iostream>
using namespace std;

int main ()
{
    int n,res,max,a[100005],i,cnt=0;
    cin>>n;
    max = -1;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]>max)
        {
            max = a[i];
            res = i;
        }
    }
    for(i=1; i<=n; i++)
    {
        if(a[i]==max)
            cnt++;
    }
    if(cnt>1)
        cout<<-1<<endl;
        else
            cout<<res<<endl;
}
