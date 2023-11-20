#include <bits/stdc++.h>

using namespace std;

string val(int n){

    stringstream ss;

    ss<<n;

    string s;

    ss>>s;

    int count=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]%2==0)
        {
            count++;
        }
    }

    if(count==s.length())
    {
        return "Valid";
    }

    else
    {
        return "Not valid";
    }
}

int main(){
    int n;

    cin>>n;

    cout<<val(n);

    return 0;
}