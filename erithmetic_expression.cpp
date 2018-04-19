#include <bits/stdc++.h>
using namespace std;
int arr[10];
int vis[10];
bool func(int i,int val)
{
   // if(i>5)return ;
    if(i==5){
        if(val==23)
            return true;
    }
    for(int j=1; j<=5; j++){
        if(!vis[j]){
            vis[j] = 1;
            if(func(i+1,(val+arr[j])))return true;
            if(func(i+1,(val*arr[j]))) return true;
            if(func(i+1,val-arr[j]))return true;
            vis[j] = 0;
        }
    }
        return false;
}
int main()
{
    while(1)
    {
        int loc = 1;
        for(int i=1; i<=5; i++)
        {
            cin>>arr[i];
            if(arr[i]>0)
            {
                loc = 0;
            }
        }
        if(loc)
            return 0;
        int loc2 = 0;
        for(int i=1; i<=5; i++){
            memset(vis,0,sizeof(vis));
            vis[i] = 1;
            if(func(1,arr[i]))
            {
                loc2 = 1;
                break;
            }
            vis[i] = 0;
        }
        if(loc2)
            printf("Possible\n");
        else
            printf("Impossible\n");
    }
}
