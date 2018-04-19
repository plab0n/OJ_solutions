#include <iostream>
using namespace std;

int main ()
{
    int t;
    int a,b,c,d;
    long long sum,res;
    int cas;
    cin>>t;
    cas = 1;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        sum = a+b+c+d;

        if(sum>=7500 && sum<10000)
        {
            res = sum - ((sum*10)/100);
        }
        else if(sum>=10000)
        {
           res = sum - ((sum*20)/100);
        }
        else
            res = sum;
        cout<<"Case "<<cas<<": "<<res<<endl;
        cas++;
    }
    return 0;
}
