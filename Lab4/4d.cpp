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
            if(i==0 || j==0)
            {
                arr[i][j]=i+j;
            }

            else
            {
                arr[i][j]=i*j;
            }

            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
    }

    return 0;
}