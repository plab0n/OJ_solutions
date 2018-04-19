#include <iostream>
using namespace std;
long long dp[5005];
long long fib(int n)
{
    if(n==0)
        return 0;
       else if(n==1)
            return 1;
           else if(n==2)
                return 1;
            if(dp[n]!=0)
                return dp[n];
                else
                    dp[n] = fib(n-1)+fib(n-2);

                    return dp[n];
}
int main ()
{
    int num,i;

    while(cin>>num){
        for(i=0; i<5000; i++)
            dp[i] = 0;
    long long res = fib(num);
    cout<<"The Fibonacci number for "<<num<<" is "<<res<<endl;
    }
}
