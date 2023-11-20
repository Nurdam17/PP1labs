#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;

    cin>>s;

    char l;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='z')
        {
            s[i]=s[i]-25;
        }

        else
        {
            s[i]+=1;
        }
    }

    cout<<s;

    return 0;
}