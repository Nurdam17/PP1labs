#include <bits/stdc++.h>

using namespace std;

void pal(string s){
    string t=s;

    reverse(s.begin(), s.end());

    if(s==t)
    {
        cout<<"Yes";
    }

    else
    {
        cout<<"No";
    }
}

int main(){
    string s;

    cin>>s;

    pal(s);

    return 0;
}