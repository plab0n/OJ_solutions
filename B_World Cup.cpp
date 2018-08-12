#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[100009];
    while(cin>>n)
    {
        for(int i=1; i<=n; i++)cin>>arr[i];
        int min_ghurnon = 1e9,res;
        for(int i=1; i<=n; i++)
        {
            int ghurnon = (arr[i]-(i-1))/n;
            if((arr[i]-(i-1))%n)ghurnon++;
            if((arr[i]-(i-1))<=0)ghurnon = 0;
            if(ghurnon<min_ghurnon)
            {
                min_ghurnon = ghurnon;
                res = i;
            }
        }
        cout<<res<<endl;
    }
}
