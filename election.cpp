#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[105];
    int limak,max=0,i,n,a;

    cin>>n;

    cin>>limak;

    for(i=0; i<n-1; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+(n-1));
    int cnt = 0;
    while(arr[n-2]>=limak)
    {
        arr[n-2]--;
        cnt++;
        limak++;
        sort(arr,arr+(n-1));
    }
    cout<<cnt<<endl;
}
