#include <iostream>
using namespace std;

int chk[100],number[100];
int i,n;
void permutation(int a, int n)
{
    if(a==n+1)
    {
        for(i=1; i<=n; i++)
        {
            cout<<number[i] ;
        }
        cout<<endl;

    }

    for(i=1; i<=n; i++)
    {
        if(!chk[i])
        {
            chk[i] = 1;
            number[a] = i;
            permutation(a+1,n);
            chk[i] = 0;
            a = 1;
        }
    }

}
int main ()
{
    cin>>n;

    permutation(1,n);
}
