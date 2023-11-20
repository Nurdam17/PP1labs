#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v1;
    vector<int> v2;
    int a;
    int b;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v1.push_back(a);
    }
    for(int j=0;j<m;j++)
    {
        cin>>b;
        v2.push_back(b);
    }
    auto s=unique(v1.begin(),v1.end());
    v1.erase(s, v1.end());
    auto t=unique(v2.begin(),v2.end());
    v2.erase(t,v2.end());
    vector<int> vec;
    int i=0,j=0;
    while(i<v1.size() || j<v2.size())
    {
        if(i<v1.size())
        {
            vec.push_back(v1[i]);
            i++;
        }
        if(j<v2.size())
        {
            vec.push_back(v2[j]);
            j++;
        }
    }
    auto it=unique(vec.begin(),vec.end());
    vec.erase(it,vec.end());
    for(int k : vec)
    {
        cout<<k<<" ";
    }
    return 0;
}