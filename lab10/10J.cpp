#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    rotate(v.begin(),v.begin()+m,v.end());
    reverse(v.begin(),v.end());
    for(int i : v)
    {
        cout<<i<<" ";
    }
    return 0;
}