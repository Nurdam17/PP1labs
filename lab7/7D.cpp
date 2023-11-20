#include <bits/stdc++.h>

using namespace std;

void summa(string s){
    int sum=0;

    char c;

    for(int i=0;i<s.length();i++)
    {
        c=s[i]-'0';

        sum+=c;
    }

    cout<<sum;
}

int main(){
    string s;

    cin>>s;

    summa(s);

    return 0;
}

