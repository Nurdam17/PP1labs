#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;

    cin>>s;

    int vowels=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i')
        {
            vowels++;
        }
    }

    cout<<vowels;

    return 0;
}