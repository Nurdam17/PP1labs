#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, t;

    cin>>s>>t;

    int l1=s.length();
    int l2=t.length();

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    int eq=true;

    if(l1==l2)
    {
        for(int i=0;i<l1;i++)
        {
            if(s[i]!=t[i])
            {
                eq=false;
            }
        }
    }

    if(l1!=l2)
    {
        eq=false;
    }

    if(eq)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }

    return 0;
}