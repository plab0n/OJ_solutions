#include <iostream>
#include <set>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int n;
  vector <int>num;
int bin_srch(int b)
{
    int s = 0;
    int end = num.size();

    while(s<=end)
    {
        int mid = (s+end)/2;

        if(num[mid]>b)
        {
            end = mid;
        }
        else if(num[mid]<b)
        {
            s = mid;
        }
        else if(num[mid]==b)
            return mid;
    }
}
int main ()
{
    int m,i,a[1005],b,j,res,dist1,dist2;
    while(cin>>n)
    {
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(i=1; i<=n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                num.push_back(a[i]+a[j]);
            }
        }
        for(i=0; i<num.size(); i++)
            cout<<num[i]<<endl;
        cin>>m;
        for(i=1; i<=m; i++)
        {
            cout<<"am here"<<endl;
            cin>>b;
            num.push_back(b);
            sort(num.begin(),num.end());
            res = bin_srch(b);
            cout<<res<<endl;
                if(res==1)
                    cout<<num[1]<<endl;

                dist1 = num[res]-num[res-1];
                dist2 = num[res+1]-num[res];
                if(dist1>dist2)
                    cout<<num[res+1]<<endl;
                    else
                        cout<<num[res]<<endl;
        }
    }

}

