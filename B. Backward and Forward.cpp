#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    long long n,a[100005],cum[100005],cum2[100005],cm=0;
    while(t--){
        cin>>n;

        for(int i=0;i<n;i++){
            cin>>a[i];

        }

        int c =0;
        int left=0;
        int right=n-1;
        while(left<=right){

            if(a[left]!=a[right]){
                if(a[left]<a[right]){
                    left++;
                    a[left] = a[left] + a[left-1];
                }else{
                    right--;
                    a[right] = a[right] + a[right+1];
                }
                c++;
            }else{
                left++;
                right--;
            }
        }

        cout<<c<<endl;
    }



return 0;
}
