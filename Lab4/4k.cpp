#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;

    cin>>n>>m;

    int arr[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    int r,c;

    for(int i=0;i<n;i++)
    {
        r=0;

        for(int j=0;j<m;j++)
        {
            r+=arr[i][j];
        }

        cout<<"The sum of row number "<<i+1<<" is "<<r<<endl;
    }

    for(int j=0;j<m;j++)
    {
        c=0;

        for(int i=0;i<n;i++)
        {
            c+=arr[i][j];
        }

        cout<<"The sum of column number "<<j+1<<" is "<<c<<endl;
    }

    return 0;
}