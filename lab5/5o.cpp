#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;

    cin>>s;

    char last='A';

    for(int i=0;i<s.length();i++)
    {
        if(s[i]>last)
        {
            last=s[i];
        }
    }

    cout<<last;

    return 0;
}