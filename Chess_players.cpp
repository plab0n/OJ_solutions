#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen("innn.txt","r",stdin);
	//freopen("out.txt","w",stdout);

	int n;

	while(cin>>n)
	{
		int loc = 0;
		int arr[209];
		for(int i=1; i<=2*n; i++)
			cin>>arr[i];
		sort(arr+1,arr+1+n*2);
		int j = n*2;
		for(int i=1; i<=n; i++)
		{
			if(arr[i]>=arr[j])
			{
				loc = 1;
			}
			--j;
		}
		if(loc)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
}