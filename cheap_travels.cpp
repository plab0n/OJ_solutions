#include <iostream>
using namespace std;

int main()
{
    int n,m,a,b;

    cin>>n>>m>>a>>b;

    int one = n*a;
    int two = (n/m)*b;

    if(n%m!=0)
    {
        two+=(n%m)*a;
        int two2 = ((n/m)+1)*b;

        if(two>two2)
            two = two2;
        }
    int ans = (one<two)?one:two;
    cout<<ans<<endl;
}
