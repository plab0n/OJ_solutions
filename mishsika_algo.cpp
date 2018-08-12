#include <bits/stdc++.h>
using namespace std;

int main()
{
   // int arr[]
   int n;
   while(cin>>n)
   {
        for(int i=1; i<=n; i++)
        {
            int val;
            cin>>val;
            if(val%2==0)
                cout<<val-1<<" ";
                else
                    cout<<val<<" ";
        }
        cout<<endl;
   }
}
