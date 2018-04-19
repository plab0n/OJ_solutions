#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{
    int arr[100];
    int n,a,i;

    scanf("%d%d", &n,&a);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    a = a-1;
    int sum = 0;
    if(arr[a]>0)
    {
        sum+=arr[a];
    }

    for(i=1; i<=n/2-1; i++)
    {
        if(arr[a+i]==0 && arr[a-1]>0)
            continue;
            else
                sum+=arr[a+i]+arr[a-i];

    }
    printf("%d\n", sum);

}
