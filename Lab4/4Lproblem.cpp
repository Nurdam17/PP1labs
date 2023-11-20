#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;

    cin>>n>>m;

    int arr[n][m];

    int sum=0;

    int rpos=1;

    int cpos=1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"coordinates of min elements:"<<'\n';

    for(int i=0;i<m;i++)
    {
        int min=arr[0][i];

        cpos=i+1;

        for(int j=0;j<n;j++)
        {
            if(min>arr[j][i])
            {
                min=arr[j][i];

                rpos=j+1;
            }
        }

        sum+=min;

        cout<<rpos<<";"<<cpos<<endl;
    }

    cout<<'\n'<<"Their sum:"<<endl;

    cout<<sum<<endl;

    return 0;
}