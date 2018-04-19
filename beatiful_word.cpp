#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[105];

    while(cin>>str)
    {
        int len = strlen(str);
        int loc=1,i;
        for(i=0; i<len; i++)
        {
            if(str[i]==str[i+1])
            {
                loc = 0;
                break;
            }
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
            {
                if(str[i+1]=='a'||str[i+1]=='e'||str[i+1]=='i'||str[i+1]=='o'||str[i+1]=='u'||str[i+1]=='y')
                {
                    loc = 0;
                    break;
                }
            }
        }
        if(loc)
            cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
    }
}
