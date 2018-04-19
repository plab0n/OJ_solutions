#include<iostream>

using namespace std;

int main(){
    int n,ary[100],cnt=0;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>ary[i];
    }
    for(int j=0;j<n;j++){
        if(ary[j]==1){
            cnt++;
        }
    }
    cout<<cnt<<endl;

return 0;
}
