#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    int cnt=0;
    vector<int> v;
    map<int,int> m;
    int XOR;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        m[v[i]]=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(m[v[i]^v[j]])
            {
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}