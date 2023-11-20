#include <bits/stdc++.h>

using namespace std;

string pos(string s, int n){

    int count=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9')

        {
            count++;
        }
    }

    if(count>=n)
    {
        return "YES";
    }

    else
    {
        return "NO";
    }
}

int main(){
    string s;

    int n;

    cin>>s>>n;

    cout<<pos(s,n);

    return 0;
}