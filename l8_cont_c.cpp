#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
    int* arr;
    int* dst;
    int i,n,x;
    bool status = false;

    while(cin>>n)
    {
        arr = (int*)malloc(n*sizeof(int));
        dst = (int*)malloc(n*sizeof(int));
        for(i=0; i<n; i++)
        {
            cin>>dst[i]>>arr[i];
        }
        x = arr[0];
        for(i=0; i<n; i++)
        {
            if(45+(dst[i]/5)<=56)
            {
            if(arr[i]<=x)
            {
                x = arr[i];
                status = true;
            }
            }
        }
        if(!status)
            cout<<"Bad luck"<<endl;
        else if(status)
            cout<<x<<endl;
    }
}
