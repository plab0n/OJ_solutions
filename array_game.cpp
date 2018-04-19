#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector <int> vec;
    int t,n,i,mx,cnt,num;

    cin>>t;
    //cnt = 0;
    while(t--)
    {
        cnt=0;
        bool stts = true;
        cin>>n;
        for(i=0; i<n; i++){
            cin>>num;
            vec.push_back(num);
            }

         //mx = 0;

         while(stts)
         {
            cnt++;
            int x = vec[0];
            mx = 0;
            for(i=1; i<vec.size(); i++)
            {
                if(x<vec[i])
                {
                    x = vec[i];
                    mx = i;
                }
            }
            if(vec.empty() || mx==0)
                stts = false;
             else{
                    for(i=1; i<=mx+1; i++)
                        vec.pop_back();
                }
         }
         if(cnt%2==0)
         {
            cout<<"BOB"<<endl;
         }
         else
            cout<<"ANDY"<<endl;

    }
    return 0;
}
