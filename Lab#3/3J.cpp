#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(){
    int n,m;

    cin>>n>>m;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]==m || arr[i]>m)
        {
            cout<<i<<endl;

            break;
        }

        else if(arr[i]==m-1)
        {
            cout<<i+1<<endl;

            break;
        }
    }

    return 0;
}