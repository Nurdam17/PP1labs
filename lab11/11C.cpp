#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,double> m;
    vector<string> v;
    string name;
    double points;
    double total=0;
    for(int i=0;i<n;i++)
    {
        cin>>name>>points;
        if(m.find(name)!=m.end())
        {
            m[name]+=points;
        }
        else
        {
            m[name]=points;
        }
        v.push_back(name);
        total+=points;
    }
    vector<pair<double,string>> res;
    vector<pair<double,string>> :: iterator it;
    for(int i=0;i<n;i++)
    {
        res.push_back(make_pair(m[v[i]]*100/total,v[i]));
    }
    sort(res.rbegin(),res.rend());
    it=unique(res.begin(),res.end());
    res.erase(it,res.end());
    for(auto pair : res)
    {
        cout<<pair.second<<" "<<pair.first<<"%"<<'\n';
    }
    return 0;
}