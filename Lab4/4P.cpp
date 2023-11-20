#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin>>n;

    int arr[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    int s=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j==n-1)
            {
                s+=arr[i][j];
            }
        }
    }

    cout<<s;

    return 0;
}