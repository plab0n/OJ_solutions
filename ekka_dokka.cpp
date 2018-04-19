#include <iostream>
using namespace std;

int main()
{
    long long t,w,i;
    bool stts;
    int cas = 1;
    cin>>t;

    while(t--)
    {
        stts = false;
        cin>>w;
        for(i=2; i<=w/2; i+=2)
        {
            //cout<<w%i<<" "<<w/i<<endl;
            if(w%i==0 && (w/i)%2!=0)
            {
                //cout<<"am here"<<endl;
                cout<<"Case "<<cas++<<": "<<w/i<<" "<<i<<endl;
                stts = true;
                break;
            }
        }
        if(!stts)
        {
            cout<<"Case "<<cas++<<": Impossible"<<endl;
        }
    }
    return 0;
}
