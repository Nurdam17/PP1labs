#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<string,int> m;
    map<string,int> :: iterator it;
    string s;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        m.insert(make_pair(s,i));
    }
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<'\n';
    }
    return 0;
}