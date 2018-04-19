#include <iostream>
#include<cstdio>
using namespace std;
int arr[100000];
int main ()
{
    bool stts,stts2;
    int n,atk,l,r,i,j,tmp,tmp2;

    while(scanf("%d%d",&n,&atk))
    {
        while(atk--)
        {
            scanf("%d%d",&l,&r);
            for(i=l; i<=r; i++)
                arr[i] = 1;

                for(j=l; j>=1; j--)
                {
                    if(arr[j]!=1){
                        tmp = j;
                        stts = true;
                        break;
                        }
                }


                for(i=r; i<=n; i++)
                {
                    if(arr[i]!=1){
                        tmp2 = i;
                        stts2 = true;
                        break;
                        }
                }
                if(stts)
                    printf("%d ",tmp);
                    if(stts2)
                        printf("%d\n", tmp2);
                if(!stts)
                    printf("* ");
                    if(!stts2)
                        printf("*");

                          stts = false;
                          stts2 = false;
                }


                }

        return 0;
    }

