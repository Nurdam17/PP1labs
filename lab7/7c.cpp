#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int x;

    cin>>x;

    if(find(a, a+n, x)!=a+n)
    {
        cout<<"Yes";
    }

    else
    {
        cout<<"No";
    }
}