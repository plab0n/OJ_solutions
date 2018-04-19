#include <iostream>
using namespace std;

int main ()
{
    int arr[91];
    int i,n;
    bool stts = false;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    if(arr[0]>15){
        cout<<15<<endl;
        stts = true;
        }
    if(arr[0]<=15){
    for(i=0; i<n-1; i++)
    {
        if(arr[i]+15<arr[i+1])
            {
                cout<<arr[i]+15<<endl;
                stts = true;
                break;
            }
    }
    }

    if(!stts){
        if(arr[n-1]+15<90)
            cout<<arr[n-1]+15<<endl;
        else
            cout<<90<<endl;
    }
        return 0;


}
