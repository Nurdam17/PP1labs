#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(){
    long long int n;

    cin>>n;

    long long int arr[n+1][n+1];

    int mx=INT_MIN;

    long long posofrow;

    long long posofcol;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>arr[i][j];

            if(mx<arr[i][j])
            {
                mx=arr[i][j];

                posofrow=i;

                posofcol=j;
            }
        }
    }

    cout<<posofrow<<" "<<posofcol<<endl;

    return 0;
}