#include <iostream>
using namespace std;

int main ()
{
    int arr[7];
    int i,j,temp,sum,cnt,cnt2;
    for(i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cnt = 0;
    int a = -1;
    int chk1=0,chk2 = 0,cnt3;
    for(j=0; j<=4; j++)
    {
        if(a<0 && arr[j]==arr[j+1]){
        cout<<arr[j]<<" "<<arr[j+1]<<endl;
            cnt=j+1;
            a++;
            if(a==0)
                chk1+=arr[j]+arr[j+1];
             else
                    chk1+=arr[j];
            }
            if(a==0)
                cnt2=j-1;
                if(a==1)
                    break;
            else if(a>0 && arr[j]==arr[j+1]){
                chk2+=arr[j];
                cnt3 = j+1;
                }
                }
                cout<<chk1<<" "<<chk2<<endl;
        if(chk1>chk2){
            for(i=cnt; i>=cnt2; i--)
        {
            arr[i] = 0;
        }
        }
        else if(chk1<chk2)
        {
            for(i=cnt3; i>cnt; i--)
                arr[i] = 0;
        }

    sum = 0;
    for(i=0; i<5; i++)
    {
        sum+=arr[i];
    }
    cout<<sum<<endl;
}
