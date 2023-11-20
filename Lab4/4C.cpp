#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;

    cin>>n>>m;

    int arr[n][m];

    int negative=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];

            if(arr[i][j]<0)
            {
                negative++;
            }
        }
    }

    cout<<negative;

    return 0;
}