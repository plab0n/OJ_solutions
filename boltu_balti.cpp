#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    while(cin>>n>>m){
    long long sum1 = (n*(n+1))/2;
    long long sum2 = (m*(m+1))/2;
   // cout<<sum1<<" "<<sum2<<endl;
    if(n==m)
        cout<<"Sum of "<<m<<" to "<<n<<" is -> "<<m<<";"<<endl;
    else if(n>m)
    {
        cout<<"Sum of "<<m<<" to "<<n<<" is -> "<<(sum1-sum2)+m<<";"<<endl;
    }
    else{
        cout<<"Sum of "<<n<<" to "<<m<<" is -> "<<(sum2-sum1)+n<<";"<<endl;
    }
    }
}
