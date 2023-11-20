#include <bits/stdc++.h>

using namespace std;

void max(string s){
    int mx=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]-'0'>mx)
        {
            mx=s[i]-'0';
        }
    }

    cout<<mx;
}

int main(){
    string s;

    cin>>s;

    max(s);

    return 0;
}