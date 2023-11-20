#include <bits/stdc++.h>

using namespace std;

string check(int a[], int n, int x){

    if(find(a, a+n, x)!= a+n)
    {
        return "Yes";
    }

    else
    {
        return "No";
    }
}

int main(){
    int n;

    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int x;

    cin>>x;

    cout<<check(a, n, x);

    return 0;
}