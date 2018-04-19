#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main ()
{
    char str[1005];
    char str2[10] = "BokaChele";
    int i,t,sum,sum2=0;
//    FILE *fp = freopen("boka.txt", "r", stdin);
//    FILE *fp2 = freopen("bokaput.txt", "w", stdout);
    for(i=0; i<strlen(str2); i++)
        sum2+=(int)str2[i];


    cin>>t;
    int cas = 1;
    while(t--)
    {
        cin>>str;
        sum = 0;
        for(i=0; i<strlen(str); i++)
        {
            sum+=(int)str[i];
        }
        if(sum%sum2==0)
            cout<<"Case "<<cas++<<": "<<"BEAUTY"<<endl;
            else
                 cout<<"Case "<<cas++<<": "<<"UGLY"<<endl;
    }
//    fclose(fp);
//    fclose(fp2);
    return 0;
}
