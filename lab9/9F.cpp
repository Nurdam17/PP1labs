#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t=s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            s[i]+=1;
        }
        else if(s[i]==')')
        {
            s[i]-=1;
        }
    }
    reverse(s.begin(),s.end());
    if(s==t)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}