#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;

    while(cin>>str1>>str2)
    {
        int len1 = str1.length();
        int len2 = str2.length();
        int j,i;
        if(len1<len2)
        {
            j = len2-1;
            for(i=len1-1; i>=0; i--)
            {
                if(str1[i]!=str2[j])
                    break;
                --j;
            }
            cout<<i+1+j+1<<endl;
        }
        else
        {
            j = len1-1;
            for(i=len2-1; i>=0; i--)
            {
                if(str1[j]!=str2[i])
                    break;
                --j;
            }
            cout<<i+1+j+1<<endl;
        }

    }
}
