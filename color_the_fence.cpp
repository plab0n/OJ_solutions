#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,v;

    while(cin>>v)
    {
        int min = 12345678,idx;
        for(int i=1; i<=9; i++)
        {
            cin>>num;
            if(min>=num)
            {
                min = num;
                idx = i;
            }
        }
        if(min>v)
        {
            cout<<-1<<endl;
        }
        else{
        for(int j=min; j<=v; j+=min)
        {
            cout<<idx;
        }
        cout<<endl;
        }
    }
}
