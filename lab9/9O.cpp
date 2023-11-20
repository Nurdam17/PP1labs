#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,string> m;
    int n;
    string s,t;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s>>t;
        m.insert(make_pair(s,t));
    }
    int mm;
    cin>>mm;
    for(int j=0;j<mm;j++)
    {
        string k,l;
        cin>>k>>l;
        if(!m.count(k))
        {
            cout<<"login error"<<'\n';
        }
        else if(m[k]!=l)
        {
            cout<<"password error"<<'\n';
        }
        else
        {
            cout<<"correct password"<<'\n';
        }
    }
    return 0;
}