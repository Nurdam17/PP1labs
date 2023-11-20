#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        s[i]+=n;
        if(s[i]>'Z')
        {
            s[i]=s[i]-'Z'-1+'A';
        }
    }
    cout<<s;
    return 0;
}