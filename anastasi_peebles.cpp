#include <bits/stdc++.h>
using  namespace std;

int main()
{
    int num,n,k;

    while(cin>>n>>k)
    {
        int i,p=0,cnt=0,temp=0;
        for(i=0; i<n; i++){
            cin>>num;
            if(num<=k)
            {
                p++;
                if(p==2)
                {
                    cnt++;
                    p = 0;
                }
            }
           else if(num>k && num<=(k*2))
            {
                cnt++;
            }
           else if(num>(k*2))
            {
                while(num>0)
                {
                    int res = num;
                    num-=(k*2);
                    if(num<0)
                    {
                        temp+=res;
                    }
                    else
                        cnt++;
                }
            }
        }
        if(p>0)
        {
            cnt++;
        }
        if(temp%(k*2)==0)
        {
            cnt+=(temp/(k*2));
        }
        else
            cnt+=(temp/(k*2))+1;

            cout<<cnt<<endl;

    }
}
