#include <iostream>
using namespace std;

int main()
{
    long long t,n,cost,mntn,cas=1;

    cin>>t;

    while(t--)
    {
        long long temp=100000000000000000,temp2=1000000000000000000;
        cin>>n;
        while(n--)
        {
            cin>>cost>>mntn;
            if(temp>=cost && mntn<=temp2)
            {
                temp = cost;
                temp2 = mntn;
            }
        }
        cout<<"Case "<<cas++<<": "<<temp<<" "<<temp2<<endl;
    }
}
