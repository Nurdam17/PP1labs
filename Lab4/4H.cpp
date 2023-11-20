#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(){
    int n,m,i,j;

    cin>>n>>m;

    int arr[n+1][m+1];

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>arr[i][j];
        }
    }

    int mn=INT_MAX;

    int position;

    for(int i=1;i<=n;i++)
    {
        int r=0;

        for(int j=1;j<=m;j++)
        {
            r+=arr[i][j];
        }

        if(r<mn)
        {
            mn=r;

            position=i;
        }
    }

    cout<<position;

    return 0;
}