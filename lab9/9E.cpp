#include <bits/stdc++.h>

using namespace std;

int main(){
    map<string,int> m;
    map<string,int> :: iterator it;

    int n;

    cin>>n;
    string s;

    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(m.find(s)==m.end())
        {
            m[s]=1;
        }
        else
        {
            m[s]++;
        }
    }

    int cnt=0;
    for(it=m.begin();it!=m.end();it++)
    {
        if((it->second)==3)
        {
            cnt++;
        }
    }
    
    cout<<cnt; 
    
    return 0;
}
