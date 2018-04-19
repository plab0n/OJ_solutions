#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main ()
{
    vector <char> sent;
    vector <char> sent2;
    string str;
    int i,j,k,cnt;

    while(getline(cin,str))
    {
        if(str=="DONE")
            break;

        else{

            for(i=0; i<str.length(); i++)
            {
                if(str[i] ==' ' || str[i]=='.' ||str[i]==','||str[i]=='!'||str[i]=='?')
                        continue;
                 else
                {
                        sent.push_back(str[i]);
                        sent2.push_back(str[i]);

                        }
            }
            k = 0;
            cnt = 0;
            int sz = sent.size();
            for(j=sz-1; j>=0; j--)
            {

    if(sent2[j]==sent[k] || (int)sent2[j]+32==sent[k] || (int)sent2[j]-32==sent[k] || sent2[j]==(int)sent[k]+32|| sent2[j]==(int)sent[k]+32)
                    cnt++;
                 else
                        break;
                        k++;
            }
            if(cnt==sz)
                cout<<"You won’t be eaten!"<<endl;
                else
                    cout<<"Uh oh.."<<endl;

                    sent.clear();
                    sent2.clear();

        }
    }
}
