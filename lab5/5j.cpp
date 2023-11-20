#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;

    cin>>s;

    char letter;

    letter=s[0];

    string w="",t;

    w=s;

    w+=letter;

    t=w;

    reverse(w.begin(),w.end());

    if(w==t)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }

    return 0;
}