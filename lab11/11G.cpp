#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<string,int>> v;
    string s;
    int day;
    map<string,int> m;
    map<string,int> :: iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>s>>day;
        v.push_back(make_pair(s,day));
    }
    sort(v.begin(),v.end());
    auto k=unique(v.begin(),v.end());
    v.erase(k,v.end());
    for(auto pair : v)
    {
        if(m.find(pair.first)!=m.end())
        {
            m[pair.first]++;
        }
        else
        {
            m[pair.first]=1;
        }
    }
    for(it=m.begin();it!=m.end();it++)
    {
        if(it->second>=3)
        {
            cout<<it->first<<" "<<"+1"<<'\n';
        }
        else
        {
            cout<<it->first<<" "<<"NO BONUS"<<'\n';
        }
    }
    return 0;
}