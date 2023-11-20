#include <bits/stdc++.h>

using namespace std;

int a[10000], b[10000], d[10000];

int n;

void f(){
    for(int i=0;i<n;i++)
    {
        d[i]=abs(a[i]-b[i]);
    }
}

int main(){
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int j=0;j<n;j++)
    {
        cin>>b[j];
    }

    f();

    for(int i=0;i<n;i++)
    {
        cout<<d[i]<<" ";
    }

    return 0;
}