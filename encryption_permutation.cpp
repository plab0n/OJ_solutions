#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

int main ()
{
    char str[100000];
    int n,arr[25],i,j;
    char store[50000];
    while(cin>>n)
    {
        int cnt = 0;
        if(n==0)
            return 0;

            else
            {
                for(i=0; i<n; i++)
                    cin>>arr[i];
                    bool stts = true;
                    while(stts){
                    for(i=0; i<n; i++)
                    {
                        cin>>str[i];
                        if(str[i]=='\n')
                        {
                            stts = false;
                            break;
                        }

                    }

                    for(j=0; j<i; j++)
                    {
                        store[cnt] = str[arr[j]];
                         cnt++;
                    }
                        if(!stts)
                            break;
                             cout<<store<<endl;
                    }
                    //int len2 = store.size();
                    //cout<<len2<<endl;
                     cout<<"ba;";
                    cout<<store<<endl;
            }
            cout<<endl;
    }
}
