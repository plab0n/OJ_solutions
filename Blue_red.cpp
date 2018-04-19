#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;

    while(cin>>n>>m)
    {
        int cnt = 0;
        if(m<=n)
            cout<<n-m<<endl;
         else if((m/2)<=n)
         {
             cnt+=(n-(m/2));
             cout<<cnt+1<<endl;
         }
        else{
            int temp;
            if(m%2==0)
            {
                temp = m;
                cnt = 0;
            }
            else
            {
                temp = m+1;
                cnt = 1;
            }
            while(temp>n)
            {
                if(temp/2>n)
                temp/=2;
                else
                    break;
                if(temp%2!=0)
                {
                    temp = temp+1;
                    ++cnt;
                }
                ++cnt;
            }
            int div = temp*2;
            while(div%n>0)
            {
                ++cnt;
                --n;
            }
            cout<<cnt+1<<endl;


        }
    }
}
