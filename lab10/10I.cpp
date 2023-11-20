#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    vector<int> t;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        t.push_back(a);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(t[i]==v[i])
        {
            cout<<"OK"<<'\n';
        }
        else
        {
            cout<<"Instead of "<<t[i]<<" here was "<<v[i]<<'\n';
        }
    }
    return 0;
}