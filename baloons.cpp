#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[15];
    while(cin>>n)
    {
        int sum=0;
        for(int i=0; i<n; i++){cin>>arr[i];sum+=arr[i];}
        int po = pow(2,n);
        vector<int>val;
        int loc =0;
        for(int i=1; i<po; i++)
        {
            int temp = i;
             loc = 0;
            int res1=0,res2=0,bit=0;
            val.clear();
            while(temp>0)
            {
                if(temp%2){
                    res1+=arr[bit];
                    val.push_back(bit+1);
                    }
                    ++bit;
                    temp/=2;
            }
            res2 = sum-res1;
            if(res1>res2 && res2>0)
            {
                loc =1;
                break;
            }

        }
        if(loc)
        {
            cout<<val.size()<<endl;
            for(int i=0; i<val.size(); i++)cout<<val[i]<<" ";
            cout<<endl;
        }
        else cout<<-1<<endl;
    }
}
