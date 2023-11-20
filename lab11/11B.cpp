#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    vector<int> v;
    vector<int> :: iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    it=unique(v.begin(),v.end());
    v.resize(distance(v.begin(),it));
    int l=v.size();
    if(n==l)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}