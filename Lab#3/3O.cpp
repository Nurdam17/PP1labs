#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n;

    cin>>n;

    long long int x[n];

    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }

    sort(x, x+n);

    reverse(x, x+n);

    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<" ";
    }

    return 0;
}