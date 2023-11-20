#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,w;

    cin>>n;

    string s=".";

    string t="*";

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-i;j++)
        {
            cout<<s;
        }

        for(int j=n-2*i;j<=n;j++)
        {
            cout<<t;
        }

        for(int j=2*n-1; j-i>n; j--)
        {
            cout<<s;
        }

        cout<<'\n';
    }

    return 0;
}