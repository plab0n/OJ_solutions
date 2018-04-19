#include <bits/stdc++.h>
using namespace std;

        /*Author*/
        /*plab0n*/
#define MAX 12345678;
#define max(x,y) ((x) >= (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define scI(a) scanf("%d",&a);
#define scLL(a) scanf("%lld",&a);
#define scI2(a,b) scanf("%d%d",&a,&b);
#define scLL2(a,b) scanf("%lld%lld",&a,&b);

#define dekhao(a) printf("%d\n",a);
#define dekhao2(a,b) printf("%d %d\n",a,b);
#define loop(i,n) for(i=1; i<=n; i++)
typedef int i32;
typedef long long i64;
int main()
{
    i32 n;
    cin>>n;
    if(n<=5){
        dekhao(1);
        }

    else
    {
        i32 ans = n/5;
        if(n%5==0)
        {
            dekhao(ans);
        }
        else
        dekhao(ans+1);
    }
}

