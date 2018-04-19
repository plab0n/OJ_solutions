#include <bits/stdc++.h>
using namespace std;

int arr[200009];
int main()
{
    int n,k,q,a,b;
    vector<int>vec1;
    scanf("%d%d%d",&n,&k,&q);
    int i;
    while(n--)
    {
        scanf("%d%d",&a,&b);
        for(i=a; i<=b; i++)
        {
            arr[i]++;
            if(arr[i]==k)
            {
                vec.push_back(i);
            }
        }

    }
    sort(vec.begin(),vec.end());
    while(q--)
    {
        int sum=0;
        scanf("%d%d",&a,&b);

        int loc = lower_bound(vec.begin(),vec.end(),a)-vec.begin();
        int loc2 = upper_bound(vec.begin()+loc,vec.end(),b)-vec.begin();
        //cout<<loc<<" "<<loc2<<endl;
        //cout<<loc2-loc<<endl;
        printf("%d\n",loc2-loc);
    }
}
