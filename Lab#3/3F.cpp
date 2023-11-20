#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n;

    cin>>n;

    long long int arr[n];

    int i;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    reverse(arr,arr+n);

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}