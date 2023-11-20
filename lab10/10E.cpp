#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    string s;
    double a;
    int total=0;
    map<string,double> mp;
    map<string,double> :: iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        for(int j=0;j<m;j++)
        {
            cin>>s>>a;
            
            total+=a;
            
            if(mp.find(s)!=mp.end())
            {
                mp[s]+=a;
            }
            else
            {
                mp[s]=a;
            }
        }
    }
    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second*100/total<<'\n';
    }
    return 0;
}