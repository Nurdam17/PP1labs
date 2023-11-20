#include <bits/stdc++.h>

using namespace std;

void f(string n){
    int sum=0;

    char t;

    for(int i=0;i<n.length();i++)
    {
        t=n[i]-'0';

        sum+=t/2;
    }

    cout<<sum;
}

int main(){
    string n;

    cin>>n;

    f(n);

    return 0;
}