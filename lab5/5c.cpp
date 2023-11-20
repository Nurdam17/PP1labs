#include <bits/stdc++.h>

using namespace std;

int main(){
    string s,t;

    cin>>s>>t;

    if(strstr(s.c_str(),t.c_str()))
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }

    return 0;
}