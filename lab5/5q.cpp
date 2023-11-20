#include <bits/stdc++.h>

using namespace std;

int main(){
    string s,t;

    cin>>s>>t;

    int s1=0;
    int s2=0;
    for(int i=0;i<s.size();i++)
    {
        s1+=int(s[i]);
    }
    for(int j=0;j<t.size();j++)
    {
        s2+=int(t[j]);
    }
    int rem=s2%s1;
    if(rem==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}