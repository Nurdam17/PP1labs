#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<string,int>> v;
    vector<pair<string,int>> :: iterator it;
    string s,t;
    int a,b;
    for(int i=0;i<n;i++)
    {
        cin>>s>>a>>t>>b;
        v.push_back(make_pair(s+" and "+t,a+b));
    }
    it=unique(v.begin(),v.end());
    v.resize(distance(v.begin(),it));
    sort(v.begin(),v.end());
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}