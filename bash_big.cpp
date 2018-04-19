#include <iostream>
using namespace std;
  int arr[123456];
int main()
{
    int temp = 0,n,a,i,j;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(a>temp)
        {
            temp = a;
        }
        arr[a]++;
    }
    int ans = 1;
    //cout<<temp<<endl;
    for(i=2; i<temp; i++)
    {
        int cur = 0;
        for(j=i; j<=temp; j+=i)
        {
            //cout<<arr[j]<<endl;
            cur+=arr[j];
        }
        ans = max(ans,cur);
        //cout<<"ans "<< ans<<endl;
    }
    cout<<ans<<endl;
}
