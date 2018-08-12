#include <bits/stdc++.h>
using namespace std;

struct node{
    node* next[27];
    bool endmark;
    node(){
        endmark = false;
    for(int i=0; i<26; i++)
        next[i] = NULL;
    }

}*root;

void insert(string str, int len)
{
    node* curr = root;
    for(int i=0; i<len; i++)
    {
        int id = str[i]-'a';
        if(curr->next[id]==NULL)
            curr->next[id] = new node();

        curr = curr->next[id];
    }
    curr->endmark = true;
}
bool search(string str,int len)
{
    node* curr = root;
    int cnt = 0;
    for(int i=0; i<len; i++)
    {
        int id = str[i]-'a';
        if(curr->next[id]==NULL)
        {
            ++cnt;
        }
        else
              curr = curr->next[id];
        if(cnt>=2)return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    root = new node();
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        string str;
        cin>>str;
        insert(str,str.length());
    }
    while(m--)
    {
        string q;
        cin>>q;
        if(search(q,q.length()))
            cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
    }
}

