#include <iostream>
using namespace std;

int main ()
{
    int n,d;
    cin>>n>>d;

    if(n==4 || n==6 || n==11 || n==9)
    {
       //cout<<"am here"<<endl;
        if(d>6)
            cout<<6<<endl;
            else
                cout<<5<<endl;
    }
    else if(n==2)
    {
        if(d>1)
            cout<<5<<endl;
            else
                cout<<4<<endl;
    }
    else
    {
         //cout<<n<<endl;
        if(d>5)
            cout<<6<<endl;
            else
                cout<<5<<endl;

    }
}
