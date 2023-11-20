#include <bits/stdc++.h>

using namespace std;

string ev(string s){
    int index;

    for(int i=0;i<s.length();i++)
    {
        index=i;

        if(s[i]>='a' && s[i]<='z')
        {
            if(index%2==0)
            {
                s[i]=s[i]-32;
            }
        }
    }

    return s;
}

int main(){
    string s;

    cin>>s;

    cout<<ev(s);

    return 0;
}