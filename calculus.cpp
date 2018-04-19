#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>>t;
    int arr[1009][2];
    int cas ;
    for(cas=1; cas<=t; cas++)
    {
        memset(arr,0,sizeof(arr));
        int o;
        cin>>o;
        string str;
        getchar();
        getline(cin,str);
        int len = str.length();

        int j = 0,loc=0;
        for(int i=0; i<len; i++)
        {
            if(str[i]==' ')
                continue;
            if(str[i]=='+'){
               ++j;
               loc = 0;
            }
            if(str[i]=='X'){
                    if(str[i+2]>='0'&&str[i+2]<='9'){
                    loc = 1;
                    }
                    else
                        arr[j][1] = 1;

                if(arr[j][0]==0)
                    arr[j][0] = 1;
            }
            if(str[i]>='0'&&str[i]<='9'&&loc)
            {
                while(str[i]>='0' && str[i]<='9' && i<len)
                {
                    //loc2 = 1;
                    arr[j][1]+= (int)str[i]-48;
                    ++i;
                }

            }
            if(str[i]>='0'&&str[i]<='9'&&!loc){
                int loc2 = 0;
                while(str[i]>='0'&&str[i]<='9')
                {
                    loc2 = 1;
                    //cout<<"Else "<<str[i]<<j<<endl;
                    arr[j][0]+=(int)str[i]-48;
                    //cout<<arr[j][0]<<endl;
                    ++i;
                }
                --i;
            }
        }

        for(int i=1; i<=o; i++)
        {
            for(int k=0; k<=j; k++)
            {
                arr[k][0]*=(arr[k][1]);
                --arr[k][1];
            }
        }
        cout<<"Case "<<cas<<": ";
        if(o==0){
            for(int i=0; i<=j; i++)
            {
                if(str[i]=='')
            }

        }
         // cout<<endl;
        }
        else{
                int loc = 0,loc2=0;
        for(int i=0; i<=j; i++)
        {
            if(arr[i][1]>0)
            {
                loc = 1;
                if(loc2)
                    cout<<" + ";
                cout<<arr[i][0]<<"*X";
                if(arr[i][1]>1)
                    cout<<"^"<<arr[i][1];
                loc2 = 1;
            }
            if(arr[i][1]==0)
            {
                loc = 1;
                if(loc2)
                    cout<<" + ";
                    cout<<arr[i][0];
                    loc2 = 0;
            }

        }
        if(!loc)
            cout<<0;
        }
        cout<<endl;
    }
}
