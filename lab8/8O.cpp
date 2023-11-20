#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;

    cin>>s;

    int n=s.length();

    int count=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }

    sort(s.begin(), s.end());

    for(int i=0;i<n;i++)
    {
        if(s[i]!=s[i+1])
        {
            count++;
        }
    }

    cout<<count<<'\n';

    for(int i=0;i<n;i++)
    {
        if(s[i]!=s[i+1])
        {
            cout<<s[i]<<" ";
        }
    }

    return 0;
}