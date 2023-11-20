#include <bits/stdc++.h>

using namespace std;

int a[1000][10000];

void tran(int n, int m){

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[j][i]<<" ";
        }

        cout<<'\n';
    }
}

int main(){
    int n,m;

    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    tran(n,m);

    return 0;
}