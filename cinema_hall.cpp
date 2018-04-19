#include <bits/stdc++.h>
using namespace std;
int arr[100009];
int main()
{
    string str;
    cin>>str;
    int len = str.length();

    int j=0,cnt=0,idx=0,i,max=0;
    for(i=0; i<len; i++)
    {
        if(str[i]=='0')
        {
            ++cnt;
        }
        else{
            arr[j] = cnt;
            if(cnt>max)
            {
                max = cnt;
                idx = j;
            }
            cnt = 0;
            ++j;
        }
    }
    arr[j] = cnt;
     if(cnt>max)
            {
                max = cnt;
                idx = j;
            }
            cout<<arr[idx+1]<<endl;
    if(len==2)
        cout<<1<<endl;
    else
    cout<<max+arr[idx+1]+1<<endl;
}
