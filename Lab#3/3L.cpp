#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;

    cin>>n;

    vector<int>a;

    int b,c;

    for(int i=0;i<n;i++)
    {
        cin>>b;

        a.push_back(b);
    }

    cin>>m;

    for(int i=0;i<m;i++)
    {
        cin>>c;

        a.push_back(c);
    }

    sort(a.begin(), a.end());

    for(int i=0;i<n+m;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}