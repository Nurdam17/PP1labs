#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<string,bool> m;
    map<string,bool> :: iterator it;
    string s;
    bool eq=true;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(m.find(s)!=m.end())
        {
            cout<<"user already exists"<<'\n';
        }
        else
        {
            m[s]=true;
            cout<<"new user added"<<'\n';
        }
    }
    
    return 0;
}