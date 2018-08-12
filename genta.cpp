#include <bits/stdc++.h>
using namespace std;

void Fast_IO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
}
void FiLe()
{
	freopen("input.in","r",stdin);
//	freopen("output.out","w",stdout);
}
int main()
{
    int t;
    Fast_IO();
   // FiLe();
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string str;
        cin>>str;
        int j = n-1;
        int mid = n/2;
        int one = 0,two=0;
        for(int i=0; i<mid; i++)
        {
            //cout<<str[i]<<" "<<str[j]<<endl;
            if(str[i]==str[j]){
                ++one;
               // ++two;
                }
                --j;
        }

        int res = 0;
       // cout<<one<<" "<<two<<endl;
        while(m--)
        {
            char ch;
            int id;
            cin>>id>>ch;
               // cout<<ch<<" "<<str[n-id]<<" "<<str[id-1]<<endl;
            if(n%2)
            {
                if(id==((n/2)+1))
                {
                    ++res;
                    continue;
                }
            }


                if(ch==str[n-id])
                {
                    if(str[id-1]!=str[n-id]){
                        if(one<mid)
                        ++one;
                        }
                        str[id-1] = ch;
                }
                else
                {
                    if(str[id-1]==str[n-id])
                    {
                       // cout<<id<<" "<<ch<<endl;
                        if(one>0)
                        --one;
                    }
                    str[id-1] = ch;
                }
            if(one==mid)
                ++res;
                //cout<<one<<" "<<mid<<endl;
        }
        cout<<res<<endl;
    }
}
