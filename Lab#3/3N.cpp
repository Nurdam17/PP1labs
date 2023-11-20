#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n;

    cin>>n;

    long long int mas[n];

    for(int i=0;i<n;i++)
    {
        cin>>mas[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<mas[i]*mas[i]<<" ";
    }

    return 0;
}