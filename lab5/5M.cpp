#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;

    char x;

    int n;

    cin>>s>>x>>n;

    int amount;

    for(int i=0;i<s.length();i++)
    {
        if(x==s[i])
        {
            amount++;
        }
    }

    if(amount==n)
    {
        cout<<"YES";
    }

    else if(amount!=n)
    {
        cout<<"NO";
    }

    return 0;
}