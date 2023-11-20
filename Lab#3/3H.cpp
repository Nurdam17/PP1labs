#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,l,r;

    cin>>n>>l>>r;

    long long int arr[n];

    long long int s=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=l-1;i<=r-1;i++)
    {
        s+=arr[i];
    }

    cout<<s;

    return 0;
}