#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>> v;
    vector<pair<int,int>> :: iterator it;
    int n;
    cin>>n;
    int x,y;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(x+y,i));
    }
    sort(v.begin(), v.end());
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<it->second<<" ";
    }
    return 0;
}