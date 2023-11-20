#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> m;
    
    int t;
    cin>>t;
    string s;
    int n;
    for(int i=0;i<t;i++)
    {
        cin>>s>>n;
        if(m[s]>0)
        {
            m[s]+=n;
        }
        else 
        {
            m[s]=n;
        }
    }
    for(auto pair : m)
    {
        cout<<pair.first<<" "<<pair.second<<'\n';
    }
    return 0;
}