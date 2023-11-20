#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(){
    int n;

    cin>>n;

    int arr[n][n];

    int mx=INT_MIN;

    int posofrow,posofcol;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                if(mx<arr[i][j])
                {
                    mx=arr[i][j];

                    posofrow=i+1;

                    posofcol=j+1;
                }
            }
        }
    }

    cout<<"Maximum element is: "<<mx<<" with coordinates: "<<posofrow<<";"<<posofcol;

    return 0;
}