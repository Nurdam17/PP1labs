#include <bits/stdc++.h>

using namespace std;

string vow(string s){
    string s2 = "";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='u' && s[i]!='o' && s[i]!='i' && s[i]!='A' && s[i]!='U' && s[i]!='O' && s[i]!='I' && s[i]!='E')
        {
            s2.push_back(s[i]);
        }
    }

    return s2;
}

int main(){
    string s;

    getline(cin, s);

    cout<<vow(s);

    return 0;
}