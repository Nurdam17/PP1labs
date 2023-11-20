#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    map<char,int> m;
    map<char,int> :: iterator it;
    int ans=0;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        auto k=unique(s.begin(),s.end());
        s.erase(k,s.end());
        // cout<<s<<'\n';
        for(int j=0;j<s.length();j++)
        {
            if(m.find(s[j])!=m.end())
            {
                m[s[j]]++;
            }
            else
            {
                m[s[j]]=1;
            }
        }
    }
    for(it=m.begin();it!=m.end();it++)
    {
        if(it->second==t)
        {
            ans++;
            cout<<it->first<<" ";
        }
    }
    if(ans==0)
    {
        cout<<"NO COMMON CHARACTERS";
    }
    return 0;
}