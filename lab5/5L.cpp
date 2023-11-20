#include <bits/stdc++.h>

using namespace std;

int main(){
    string s,l;

    cin>>s;

    l=s;

    sort(s.begin(), s.end());

    if(l==s)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }

    return 0;
}