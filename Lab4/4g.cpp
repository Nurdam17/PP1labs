#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin>>n;

    int arr[n+1][n+1];

    string s=".";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j==n-1)
            {
                cout<<i+1;
            }

            else
            {
                cout<<".";
            }            
        }

        cout<<'\n';
    }

    return 0;
}