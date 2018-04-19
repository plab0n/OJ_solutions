#include <iostream>
using namespace std;

int main ()
{
    long long l,r,i,num,rem,beauty=0;
    bool status = false;
    cin>>l>>r;

    for(i=l; i<=r; i++)
    {
        num = i;
        while(num!=0)
        {
            rem = num%10;
            if(rem!=0){
            if(i%rem==0)
            {
                status = true;
            }
            else
                {
                    status = false;
                    break;
                }
            }
            num/=10;
        }
        if(status)
            beauty++;
    }
    cout<<beauty<<endl;
}
