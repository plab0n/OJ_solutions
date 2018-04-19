#include <bits/stdc++.h>
using namespace std;

int main ()
{
    char str[150];
    char a[150];
    char b[150];
    int i,l;
    scanf("%s", str);
    int j = 0;
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]=='e')
            break;

        a[j]==str[i];
        j++;
    }
    int k = 0;
    for(l=i; l<strlen(str); l++)
    {
        b[k] = str[l];
        k++;
    }
    cout<<a<<" "<<b<<endl;
    if(atoi(b)<strlen(a)-2)
        {
            for(i=2; i<=atoi(b); i++)
            {
                char temp = a[i];
                a[i+1] = a[i];
                a[i] = temp;
            }
            cout<<a<<endl;
        }
     else if(atoi(b)>strlen(a)-2)
     {
        for(i=0; i<strlen(a)+(atof(b)-strlen(a)); i++)
        {
            if(a[i]=='.')
                continue;
             else if(i>strlen(a))
                    cout<<'0';
                 else
                    cout<<a[i];
        }
     }
}
