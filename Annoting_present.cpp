#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    double n;
    int m;

    while(cin>>n>>m)
    {
        double sum = 0;
        while(m--)
        {
            double x,d;
            cin>>x>>d;
           // double sum = 0;
            if(d<0)
            {
                long long mid = (n-1)/2;
                sum+= (x*n)+d*mid*(mid+1);
                if((int)n%2==0)
                    sum+=d*((int)n/2);
            }
            else{
                double dist = ((n-1)*n)/2;
                sum += (x*n + dist*d);
            }
        }
        cout<<fixed<<setprecision(10)<<sum/n<<endl;
    }
}
