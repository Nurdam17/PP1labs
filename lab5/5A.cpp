#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;

    cin>>s;

    int l=0, c=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            l++;
        }

        else if(s[i]>='A' && s[i]<='Z')
        {
            c++;
        }
    }

    cout<<l<<" "<<c<<'\n';

    return 0;
}