#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main ()
{
    vector<int>res;
    char str[1000];
    char str2[1000];

    cin>>str>>str2;
    string store = str;
    string store2 = str2;
    int i,j = store2.length()-1,l,ln = store.length();
    int carry = 0;
    l = 0;
    if(ln>j)
    {
        l = 1;
        int k = j;
        for(i=strlen(str)-1; i>=0; i--)
            {
                if(k>0){
                str2[i] = str2[j-l];
                k--;
                l++;
                }
                else
                    str2[i] = '0';
            }
    }
    else if(ln<j)
    {
        l = 1;
        int k = ln;
        for(i=strlen(str2)-1; i>=0; i--)
            {
                if(k>0){
                str[i] = str[k-l];
                k--;
                l++;
                }
                else
                    str[i] = '0';
            }
    }
    cout<<str<<" "<<str2<<endl;
    for(i=strlen(str)-1; i>=0; i--)
    {
        int store = ((int)str[i]-48)+((int)str2[i]-48)+carry;

        if(i==0)
            res.push_back(store);
        else if(store>=10)
        {
            res.push_back(store%10);
            carry = store/10;
        }
        else
            res.push_back(store);
        j--;

    }
    for(i=res.size()-1; i>=0; i--)
        cout<<res[i];
}
