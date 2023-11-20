#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(){
    int n;

    cin>>n;

    int a[n][n];

    int mx=INT_MIN;

    int scnd=-1000;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    int mn=INT_MAX;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]>mx)
            {
                mx=a[i][j];
            }

            if(a[i][j]<mn)
            {
                mn=a[i][j];
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=mx && a[i][j]>scnd)
            {
                scnd=a[i][j];
            }
        }
    }
    
    if(mn==mx)
    {
        cout<<0;
    }

    else
    {
        cout<<scnd;
    }
    
    return 0;
}