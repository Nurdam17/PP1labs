#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin>>n;

    int arr[n][n];

    int r1=0,r2=n-1,c1=0,c2=n-1;

    int k=1;

    while(k<=(n*n))
    {
        for(int i=c1;i<=c2;i++)
        {
            arr[r1][i]=k++;
        }

        for(int j=r1+1;j<=r2;j++)
        {
            arr[j][c2]=k++;
        }

        for(int i=c2-1;i>=c1;i--)
        {
            arr[r2][i]=k++;
        }

        for(int j=r2-1;j>=r1+1;j--)
        {
            arr[j][c1]=k++;
        }

        r1++;r2--;c1++;c2--;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }

        cout<<'\n';
    }

    return 0;
}