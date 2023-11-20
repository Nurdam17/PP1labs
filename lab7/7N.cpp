#include <bits/stdc++.h>

using namespace std;

void ch(int n, int a[],int k){
    int ans=0;

    if(a[0]<=k)
    {
        ans+=1;
    }

    else
    {
        ans+=0;
    }

    for(int i=0;i<n;i++)
    {
        if(abs(a[i+1]-a[i])<=k)
        {
            ans++;
        }
    }

    if(ans>=2)
    {
        cout<<"cheater";
    }

    else
    {
        cout<<"no";
    }
}

int main(){
    int n,k;

    cin>>n>>k;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a, a+n);

    ch(n, a, k);

    return 0;
}